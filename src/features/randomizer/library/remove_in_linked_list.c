//
// Created by nicolas on 9/24/25.
//

#include "../randomizer.h"

static void remove_in_surv_list(surv_randomizer_perks_list_t **list, perks_t *perk_to_remove)
{
    surv_randomizer_perks_list_t *cpy = *list;
    surv_randomizer_perks_list_t *prev = NULL;

    while (cpy) {
        if (strcmp(cpy->perk->en_name, perk_to_remove->en_name) == 0) {
            surv_randomizer_perks_list_t *to_free = cpy;
            if (prev) {
                prev->next = cpy->next;
            } else {
                *list = cpy->next;
            }
            cpy = cpy->next;
            free(to_free);
            continue;
        }
        prev = cpy;
        cpy = cpy->next;
    }
}


void remove_in_linked_list(void **list, player_side_e side, perks_t *perk_to_remove)
{
    if (side == SURVIVOR)
        remove_in_surv_list((surv_randomizer_perks_list_t **)list, perk_to_remove);
}