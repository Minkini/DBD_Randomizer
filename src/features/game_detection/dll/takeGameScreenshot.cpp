#include <windows.h>
#include <iostream>
#include <fstream>

void SaveBMP(const std::wstring& filename, BYTE* data, int width, int height)
{
    BITMAPFILEHEADER bfh = {0};
    BITMAPINFOHEADER bih = {0};
    bfh.bfType = 0x4D42; // "BM"
    bfh.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
    bfh.bfSize = bfh.bfOffBits + width * height * 4;

    bih.biSize = sizeof(BITMAPINFOHEADER);
    bih.biWidth = width;
    bih.biHeight = -height; // upside-down
    bih.biPlanes = 1;
    bih.biBitCount = 32;
    bih.biCompression = BI_RGB;

    std::ofstream file(filename, std::ios::binary);
    file.write((char*)&bfh, sizeof(bfh));
    file.write((char*)&bih, sizeof(bih));
    file.write((char*)data, width * height * 4);
}

extern "C" __declspec(dllexport) int TakeGameScreenshot(LPCWSTR window)
{
    HWND hwnd = FindWindowW(nullptr, window);
    if (!hwnd) {
        std::cerr << "Fenetre non trouvee !" << std::endl;
        return -1;
    }

    RECT rect;
    GetClientRect(hwnd, &rect);
    int width = rect.right - rect.left;
    int height = rect.bottom - rect.top;

    HDC hdcWindow = GetDC(hwnd);
    HDC hdcMem = CreateCompatibleDC(hdcWindow);
    HBITMAP hBitmap = CreateCompatibleBitmap(hdcWindow, width, height);
    SelectObject(hdcMem, hBitmap);

    // PrintWindow capture la fenêtre, même si recouverte
    if (!PrintWindow(hwnd, hdcMem, PW_RENDERFULLCONTENT)) {
        std::cerr << "Erreur PrintWindow !" << std::endl;
        DeleteObject(hBitmap);
        DeleteDC(hdcMem);
        ReleaseDC(hwnd, hdcWindow);
        return -1;
    }

    BITMAP bmp;
    GetObject(hBitmap, sizeof(BITMAP), &bmp);

    BYTE* pixels = new BYTE[width * height * 4];
    GetBitmapBits(hBitmap, width * height * 4, pixels);

    SaveBMP(L"assets/screenshots/GameScreenshot.bmp", pixels, width, height);

    delete[] pixels;
    DeleteObject(hBitmap);
    DeleteDC(hdcMem);
    ReleaseDC(hwnd, hdcWindow);

    std::cout << "Capture terminee ! Screenshot sauvegarde dans screenshot.bmp" << std::endl;
    return 0;
}
