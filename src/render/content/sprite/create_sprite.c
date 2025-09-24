//
// Created by nicolas on 9/24/25.
//

#include "content.h"
#include "project.h"

sfSprite *create_sprite(sfTexture *texture, char const *texture_path)
{
    if (!texture && !texture_path) {
        printf("create_sprite: both values are NULL\n");
        return NULL;
    }
    sfSprite *sprite = sfSprite_create();
    if (!sprite) {
        printf("create_sprite: failed to create sprite\n");
        return NULL;
    }
    if (!texture) {
        sfTexture *new_texture = sfTexture_createFromFile(texture_path, NULL);
        if (!new_texture) {
            printf("create_sprite: failed to create texture\n");
            sfSprite_destroy(sprite);
            return NULL;
        }
        sfSprite_setTexture(sprite, new_texture, sfTrue);
    } else {
        sfSprite_setTexture(sprite, texture, sfTrue);
    }
    return sprite;
}