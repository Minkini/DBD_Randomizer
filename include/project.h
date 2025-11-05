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

#include <CSFML/Config.h>
#include <CSFML/System.h>
#include <CSFML/Window.h>
#include <CSFML/Graphics.h>
#include <CSFML/Audio.h>
#include <CSFML/Network.h>

#include "scene_enum.h"

typedef enum return_code {
    SUCCESS = 0,
    ERROR = -1,
} return_code_e;

typedef struct content_s content_t;

typedef struct general_s {
    sfRenderWindow *window;
    sfEvent event;
    content_t *content;
    scene_e current_scene;
} general_t;

#endif //PROJECT_H
