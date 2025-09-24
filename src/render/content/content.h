//
// Created by nicolas on 9/24/25.
//

#ifndef CONTENT_H
#define CONTENT_H

#include "SFML/Graphics.h"

typedef struct content_s {
    void *content;
} content_t;

sfSprite *create_sprite(sfTexture *texture, char const *texture_path);

void init_perks(void);
void load_content(void);
#endif //CONTENT_H
