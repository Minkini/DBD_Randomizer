//
// Created by nicolas on 9/24/25.
//

#ifndef SCENE_H
#define SCENE_H

#include "scene_enum.h"
#include "project.h"

typedef struct scene_s {
    scene_e scene;
    void (*update)(general_t *general);
    void (*draw)(general_t *general);
} scene_t;

extern scene_t const SCENE_LIST[];

void handle_scene(general_t *general);
void switch_scene(general_t *general, scene_e new_scene, int (loadFunction)(general_t *general));
#endif //SCENE_H
