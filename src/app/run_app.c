//
// Created by nicolas on 8/31/25.
//

#include "app.h"
#include "project.h"
#include "event.h"
#include "scene.h"

int run_app(general_t *general)
{
    general->current_scene = MAIN_MENU;
    while (sfRenderWindow_isOpen(general->window)) {
        handle_scene(general);
    }
    stop_app(general);
    return SUCCESS;
}
