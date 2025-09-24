//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "window.h"

int create_window(general_t *general)
{
    int window_width = 1920;
    int window_height = 1080;
    sfVideoMode mode = {window_width, window_height, 32};

    general->window = sfRenderWindow_create(mode, "DBD Tools", sfResize | sfClose, NULL);
    if (general->window == NULL) {
        printf("window creation failed\n");
        return ERROR;
    }
    return SUCCESS;
}