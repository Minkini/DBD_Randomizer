//
// Created by nicolas on 9/24/25.
//

#include "../content.h"
#include "project.h"

sfSprite *create_sprite(sfTexture *texture, char const *texture_path, sfVector2f *position, sfVector2f *scale)
{
    sfSprite *sprite = NULL;

    if (!texture && !texture_path) {
        printf("create_sprite: both values are NULL\n");
        return NULL;
    }
    if (!texture) {
        sfTexture *new_texture = sfTexture_createFromFile(texture_path, NULL);
        if (!new_texture) {
            printf("create_sprite: failed to create texture\n");
            return NULL;
        }
        sprite = sfSprite_create(new_texture);
        if (!sprite) {
            printf("create_sprite: failed to create sprite\n");
            return NULL;
        }
    } else {
        sprite = sfSprite_create(texture);
        if (!sprite) {
            printf("create_sprite: failed to create sprite\n");
            return NULL;
        }
    }
    if (position)
        sfSprite_setPosition(sprite, *position);
    if (scale)
        sfSprite_setScale(sprite, *scale);
    return sprite;
}