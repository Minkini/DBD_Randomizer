//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "window.h"

int create_renderer(general_t *general)
{
    general->renderer = SDL_CreateRenderer(general->window, -1,SDL_RENDERER_ACCELERATED);
    if (general->renderer == NULL) {
        SDL_DestroyWindow(general->window);
        printf("SDL_CreateRenderer Error: %s\n", SDL_GetError());
        SDL_Quit();
        return ERROR;
    }
    return SUCCESS;
}