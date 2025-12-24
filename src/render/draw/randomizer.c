//
// Created by nicol on 08/11/2025.
//
#include "../content/content.h"
#include "project.h"
#include "render.h"

void draw_randomizer_menu(general_t *general)
{
    sfRenderWindow_drawSprite(general->window, general->content->sprite->RandomizeButton, NULL);
}