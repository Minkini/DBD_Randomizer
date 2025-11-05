//
// Created by nicolas on 9/24/25.
//
#include "../content.h"

void load_content(general_t *general)
{
    init_perks();
    general->content = calloc(1, sizeof(content_t));
    general->content->test = create_sprite(NULL, "assets/icons/perks/survivors/IconPerks_aceInTheHole.png");
}