//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "event.h"

void handle_event(general_t *general)
{
    while (SDL_PollEvent(&general->event)) {
        if (general->event.type == SDL_QUIT) {
            general->running = 0;
        }
    }
}
