//
// Created by nicolas on 9/24/25.
//

#include "scene.h"

void handle_scene(general_t *general)
{
    sfRenderWindow_clear(general->window, sfBlack);
    sfRenderWindow_display(general->window);
}