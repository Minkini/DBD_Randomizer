//
// Created by nicolas on 8/31/25.
//

#ifndef PROJECT_H
#define PROJECT_H

#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <SDL2/SDL.h>

typedef enum return_code {
    SUCCESS = 0,
    ERROR = -1,
} return_code_e;

typedef struct general_s {
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;
    int running;
} general_t;

#endif //PROJECT_H
