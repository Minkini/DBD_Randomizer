//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "window.h"

int create_window(general_t *general)
{
    general->window = SDL_CreateWindow("DBD Tools",
    SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,
    1920, 1080,
    SDL_WINDOW_SHOWN);

    if (general->window == NULL) {
        printf("SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        return ERROR;
    }
    return SUCCESS;
}