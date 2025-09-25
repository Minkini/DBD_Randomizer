//
// Created by nicolas on 9/25/25.
//

#include "content.h"
#include "project.h"
#include "render.h"

void draw_main_menu(general_t *general)
{
    sfRenderWindow_drawSprite(general->window, general->content->test, NULL);
}
