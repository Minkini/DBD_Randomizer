//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "window.h"
#include "app.h"

void init_app(void)
{
    general_t *general = calloc(1, sizeof(general_t));

    if (general == NULL) {
        return;
    }
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        free(general);
        printf("SDL_Init Error: %s\n", SDL_GetError());
        return;
    }
    if (create_window(general) == ERROR) {
        free(general);
        return;
    }
    if (create_renderer(general) == ERROR) {
        free(general);
        return;
    }
    run_app(general);
}
