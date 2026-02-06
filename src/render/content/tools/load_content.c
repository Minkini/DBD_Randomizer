//
// Created by nicolas on 9/24/25.
//
#include "../content.h"

void load_content(general_t *general)
{
    init_perks();
    general->content = calloc(1, sizeof(content_t));
    general->content->sprite = calloc(1, sizeof(sprite_t));
    general->content->texture = calloc(1, sizeof(texture_t));
    general->app_vars = calloc(1, sizeof(app_variables_t));
    general->content->surv_perk_list = calloc(1, sizeof(randomizer_perks_list_t));

    load_variables(general);

    general->content->texture->RandomizeButtonNeutral = create_texture(general, "assets/textures/buttons/randomizer/randomizeButtonNeutral.png");
    general->content->texture->RandomizeButtonOver = create_texture(general, "assets/textures/buttons/randomizer/randomizeButtonOver.png");
    general->content->texture->RandomizeButtonPress = create_texture(general, "assets/textures/buttons/randomizer/randomizeButtonPress.png");
    general->content->texture->WindowCloseButton = create_texture(general, "assets/textures/buttons/window/closeWindow.png");
    general->content->texture->WindowCloseButtonOver = create_texture(general, "assets/textures/buttons/window/closeWindowOver.png");

    general->content->sprite->RandomizeButton = create_sprite(general->content->texture->RandomizeButtonNeutral, NULL, &(sfVector2f){1000, 800}, &(sfVector2f){0.4f, 0.4f});
    general->content->sprite->WindowCloseButton = create_sprite(general->content->texture->WindowCloseButton, NULL, &(sfVector2f){1870, 1}, &(sfVector2f){0.5f, 0.5f});
}