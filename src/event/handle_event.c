//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "event.h"

void handle_event(general_t *general)
{
    while (sfRenderWindow_pollEvent(general->window, &general->event)) {
        if (general->event.type == sfEvtClosed) {
            sfRenderWindow_close(general->window);
        }
    }
}
