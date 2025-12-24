//
// Created by nicol on 01/12/2025.
//
#include "../content.h"

void load_variables(general_t *general)
{
    general->content->variables = calloc(1, sizeof(variables_t));

    general->content->variables->nb_perks_to_pick = 4;
}