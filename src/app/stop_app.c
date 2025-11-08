//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "app.h"
#include "../features/game_detection/game_detection.h"

void stop_app(general_t *general)
{
    sfRenderWindow_destroy(general->window);
    destroyWindowHook();
}
