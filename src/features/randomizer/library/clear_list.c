//
// Created by nicolas on 9/18/25.
//

#include "../randomizer.h"
#include "project.h"
#include "content/content.h"

static void clear_list(randomizer_perks_list_t **list)
{
    randomizer_perks_list_t *cpy = *list;
    randomizer_perks_list_t *tmp = NULL;

    while (cpy) {
        tmp = cpy->next;
        free(cpy);
        cpy = tmp;
    }
    *list = create_surv_first_list_node();
}

void clear_sided_list(general_t *general, player_side_e side)
{
    if (side == SURVIVOR)
        clear_list(&general->content->surv_perk_list);
    if (side == KILLER)
        clear_list(&general->content->killer_perk_list);
}