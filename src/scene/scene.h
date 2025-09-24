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

typedef struct scene_s {
    scene_e scene;
    void (*update)(struct scene_s *scene, sfEvent *event);
    void (*draw)(struct scene_s *scene, sfRenderWindow *window);
} scene_t;


void handle_scene(general_t *general);
#endif //SCENE_H
