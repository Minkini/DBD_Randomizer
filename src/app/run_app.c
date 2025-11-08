//
// Created by nicolas on 8/31/25.
//

#include "app.h"
#include "project.h"
#include "scene.h"
#include "../features/game_detection/game_detection.h"

int run_app(general_t *general)
{
    switch_scene(general, MAIN_MENU);
    game_detection(); //TODO remove this line
    while (sfRenderWindow_isOpen(general->window)) {
        checkHookedWindow();
        handle_scene(general);
    }
    stop_app(general);
    return SUCCESS;
}
