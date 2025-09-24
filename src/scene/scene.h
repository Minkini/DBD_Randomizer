//
// Created by nicolas on 9/24/25.
//

#ifndef SCENE_H
#define SCENE_H

#include "project.h"

typedef enum scene_e {
    MAIN_MENU,
    SURV_RANDOMIZER,
} scene_e;

void handle_scene(general_t *general);
#endif //SCENE_H
