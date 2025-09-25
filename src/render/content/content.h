//
// Created by nicolas on 9/24/25.
//

#ifndef CONTENT_H
#define CONTENT_H

#include "project.h"

typedef struct content_s {
    sfSprite *test;
} content_t;

sfSprite *create_sprite(sfTexture *texture, char const *texture_path);

void init_perks(void);
void load_content(general_t *general);
#endif //CONTENT_H
