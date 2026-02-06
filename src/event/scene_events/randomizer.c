//
// Created by nicol on 08/11/2025.
//
#include "project.h"
#include "scene.h"
#include "event.h"
#include "../../features/game_detection/game_detection.h"
#include "content/content.h"
#include "../features/randomizer/randomizer.h"
#include "../functions/functions.h"

void randomizer_menu_scene_update(general_t *general)
{
    checkHookedWindow();
    if (consume_window_active_flag())
        game_detection(general);
    update_buttons(general, general->content->sprite->RandomizeButton, general->content->texture->RandomizeButtonNeutral, general->content->texture->RandomizeButtonOver, general->content->texture->RandomizeButtonPress, &exec_randomizer);
    update_buttons(general, general->content->sprite->WindowCloseButton, general->content->texture->WindowCloseButton, general->content->texture->WindowCloseButtonOver, general->content->texture->WindowCloseButtonOver, &button_close_window);
}
