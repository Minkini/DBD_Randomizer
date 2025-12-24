//
// Created by nicolas on 8/31/25.
//

#include "app.h"
#include "project.h"
#include "scene.h"
#include "../features/game_detection/game_detection.h"

int run_app(general_t *general)
{
    switch_scene(general, RANDOMIZER, &game_detection);
    while (sfRenderWindow_isOpen(general->window) && general->app_state == RUNNING) {
        handle_scene(general);
    }
    stop_app(general);
    return SUCCESS;
}
