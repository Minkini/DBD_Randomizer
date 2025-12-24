//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "window.h"

int create_window(general_t *general)
{
    sfVideoMode video_mode = sfVideoMode_getDesktopMode();

    video_mode.size.y /= 2;
    video_mode.size.x /= 2;
    general->window = sfRenderWindow_create(video_mode, WINDOW_TITLE, sfNone, 0, NULL);
    if (general->window == NULL) {
        printf("window creation failed\n");
        return FAIL;
    }
    sfView* view = sfView_create();
    sfView_setSize(view, (sfVector2f){1920, 1080});
    sfView_setCenter(view, (sfVector2f){1920/2, 1080/2});
    sfRenderWindow_setView(general->window, view);
    return SUCCESS;
}