//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "app.h"

void stop_app(general_t *general)
{
    SDL_DestroyRenderer(general->renderer);
    SDL_DestroyWindow(general->window);
    SDL_Quit();
}