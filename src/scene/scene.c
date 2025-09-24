//
// Created by nicolas on 9/24/25.
//

#include "scene.h"
#include "event.h"

scene_t const SCENE_LIST[] = {
    {MAIN_MENU, NULL, NULL},
    {SURV_RANDOMIZER, NULL, NULL},
    {NONE, NULL, NULL},
};

void handle_scene(general_t *general)
{
    sfRenderWindow_clear(general->window, sfBlack);
    for (int i = 0; SCENE_LIST[i].scene != NONE; i++) {
        if (SCENE_LIST[i].scene == general->current_scene) {
            handle_event(general, SCENE_LIST[i].update);
            //SCENE_LIST[i].draw(general);
        }
    }
    sfRenderWindow_display(general->window);
};
