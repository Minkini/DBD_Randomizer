//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "window.h"

int create_window(general_t *general)
{
    sfVideoMode mode = sfVideoMode_getDesktopMode();

    general->window = sfRenderWindow_create(mode, "DBD Tools",sfClose |sfResize, 0, NULL);
    if (general->window == NULL) {
        printf("window creation failed\n");
        return FAIL;
    }

    HWND hwnd = sfRenderWindow_getNativeHandle(general->window);
    ShowWindow(hwnd, SW_MAXIMIZE);
    return SUCCESS;
}