//
// Created by nicolas on 8/31/25.
//

#ifndef PROJECT_H
#define PROJECT_H

#include <string.h>
#include <fcntl.h>
#define GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

#include <CSFML/Config.h>
#include <CSFML/System.h>
#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include <CSFML/Audio.h>
#include <CSFML/Network.h>

#include "scene_enum.h"

#define WINDOW_TITLE "DBD Tools"

typedef enum return_code {
    SUCCESS = 0,
    FAIL = -1,
} return_code_e;

typedef enum shutdown {
    RUNNING = 0,
    STOPPING = 1,
} shutdown_e;

typedef struct content_s content_t;

typedef struct app_variables_s
{
    int dbd_menu_state;
} app_variables_t;

typedef struct perks_s perks_t;

typedef struct build_s {
    int side;
    perks_t *perk1;
    perks_t *perk2;
    perks_t *perk3;
    perks_t *perk4;
    void *object;
    void *addon1;
    void *addon2;
    void *offering;
} build_t;

typedef struct general_s {
    sfRenderWindow *window;
    app_variables_t *app_vars;
    sfEvent event;
    content_t *content;
    scene_e current_scene;
    shutdown_e app_state;
} general_t;

#endif //PROJECT_H
