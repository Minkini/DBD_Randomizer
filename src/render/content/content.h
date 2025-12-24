//
// Created by nicolas on 9/24/25.
//

#ifndef CONTENT_H
#define CONTENT_H

#include "project.h"
#include "../features/randomizer/randomizer.h"

typedef struct sprite_s {
    sfSprite *RandomizeButton;
} sprite_t;

typedef struct texture_s {
    sfTexture *RandomizeButtonNeutral;
    sfTexture *RandomizeButtonOver;
    sfTexture *RandomizeButtonPress;
} texture_t;

typedef struct variables_s {
    int nb_perks_to_pick;
} variables_t;

typedef struct content_s {
    sprite_t *sprite;
    texture_t *texture;
    variables_t *variables;
    surv_randomizer_perks_list_t *surv_perk_list;
} content_t;

sfSprite *create_sprite(sfTexture *texture, char const *texture_path, sfVector2f *position, sfVector2f *scale);
sfTexture *create_texture(general_t *general,  char *texture_path);
void update_buttons(general_t *general, sfSprite *sprite, sfTexture *neutral, sfTexture *over, sfTexture *press, void (*func)(general_t *general));
void load_variables(general_t *general);

void init_perks(void);
void load_content(general_t *general);
#endif //CONTENT_H
