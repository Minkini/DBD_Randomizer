//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "event.h"

void handle_event(general_t *general, void (*update)(general_t *general))
{
    HWND hwnd = sfRenderWindow_getNativeHandle(general->window);

    while (sfRenderWindow_pollEvent(general->window, &general->event)) {
        if (general->event.mouseButton.position.y < 32) {
            ReleaseCapture();
            SendMessage(hwnd, WM_NCLBUTTONDOWN, HTCAPTION, 0);
        }
        if (update)
            update(general);
    }
}
