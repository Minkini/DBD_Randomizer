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

#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Network.h>

#include "scene_enum.h"

typedef enum return_code {
    SUCCESS = 0,
    ERROR = -1,
} return_code_e;

typedef struct general_s {
    sfRenderWindow *window;
    sfEvent event;
    scene_e current_scene;
} general_t;

#endif //PROJECT_H
