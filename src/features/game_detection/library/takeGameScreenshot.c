//
// Created by nicol on 08/11/2025.
//
#include  "project.h"
#include "../game_detection.h"

int takeGameScreenshot(void)
{
    HMODULE dll = LoadLibraryA("captureWindow.dll");
    if (!dll) {
        printf("Impossible de charger la DLL !\n");
        return 1;
    }

    TakeGameScreenshotFunc TakeScreenshot = (TakeGameScreenshotFunc)GetProcAddress(dll, "TakeGameScreenshot");
    if (!TakeScreenshot) {
        printf("Impossible de trouver la fonction !\n");
        FreeLibrary(dll);
        return 1;
    }

    int result = TakeScreenshot(L"DeadByDaylight  ");

    FreeLibrary(dll);
    return result;
}