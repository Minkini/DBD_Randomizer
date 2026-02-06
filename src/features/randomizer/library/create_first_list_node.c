//
// Created by nicolas on 9/18/25.
//

#include "project.h"
#include "../randomizer.h"

randomizer_perks_list_t *create_surv_first_list_node(void)
{
    randomizer_perks_list_t *node = malloc(sizeof(randomizer_perks_list_t));

    if (!node)
        return NULL;
    node->next = NULL;
    node->perk = NULL;
    return node;
}