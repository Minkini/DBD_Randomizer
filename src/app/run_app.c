//
// Created by nicolas on 8/31/25.
//

#include "app.h"
#include "project.h"
#include "scene.h"

int run_app(general_t *general)
{
    switch_scene(general, MAIN_MENU);   //first scene when the app is launched
    while (sfRenderWindow_isOpen(general->window)) {
        handle_scene(general);
    }
    stop_app(general);
    return SUCCESS;
}
