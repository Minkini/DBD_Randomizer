//
// Created by nicol on 08/11/2025.
//
#include "../game_detection.h"

#define WIDEN2(x) L##x
#define WIDEN(x) WIDEN2(x)

#define windowHooked WIDEN(WINDOW_TITLE)

static HWINEVENTHOOK g_hook = NULL;
static LONG window_active_flag = 0;

void set_window_active_flag(void)
{
    InterlockedExchange(&window_active_flag, 1);
}

int consume_window_active_flag(void)
{
    return InterlockedExchange(&window_active_flag, 0);
}

static void CALLBACK HandleWinEvent(HWINEVENTHOOK, DWORD, HWND hwnd, LONG, LONG, DWORD, DWORD)
{
    wchar_t title[256];
    GetWindowTextW(hwnd, title, 256);

    if (wcsstr(title, windowHooked)) {
        set_window_active_flag();
    }
}

void initWindowHook(void)
{
    if (!g_hook) {
        g_hook = SetWinEventHook(
            EVENT_SYSTEM_FOREGROUND, EVENT_SYSTEM_FOREGROUND,
            NULL, HandleWinEvent, 0, 0, WINEVENT_OUTOFCONTEXT
        );

        if (!g_hook) {
            wprintf(L"⚠️  Impossible d'initialiser le hook de fenêtre.\n");
        }
    }
}


void checkHookedWindow(void)
{
    MSG msg;

    while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}


void destroyWindowHook(void)
{
    if (g_hook) {
        UnhookWinEvent(g_hook);
        g_hook = NULL;
    }
}