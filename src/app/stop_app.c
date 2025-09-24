//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "app.h"

void stop_app(general_t *general)
{
    sfRenderWindow_destroy(general->window);
}