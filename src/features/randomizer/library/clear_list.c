//
// Created by nicolas on 9/18/25.
//

#include "randomizer.h"
#include "project.h"

static void clear_survivor_list(surv_randomizer_perks_list_t **list)
{
    surv_randomizer_perks_list_t *cpy = *list;
    surv_randomizer_perks_list_t *tmp = NULL;

    while (cpy) {
        tmp = cpy->next;
        free(cpy);
        cpy = tmp;
    }
    *list = create_surv_first_list_node();
}

void clear_list(void **list, player_side_e side)
{
    if (side == SURVIVOR) {
        clear_survivor_list((surv_randomizer_perks_list_t **)list);
    }
}