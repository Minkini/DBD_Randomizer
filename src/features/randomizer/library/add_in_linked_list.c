//
// Created by nicolas on 9/15/25.
//

#include "project.h"
#include "surv_db.h"
#include "../randomizer.h"

static int add_surv_perk_in_linked_list(surv_randomizer_perks_list_t **perk_list, perks_t *perk_to_add)
{
    surv_randomizer_perks_list_t *new_perk = malloc(sizeof(surv_randomizer_perks_list_t));
    surv_randomizer_perks_list_t *cpy = *perk_list;
    if (!new_perk)
        return FAIL;

    new_perk->next = NULL;
    new_perk->perk = perk_to_add;

    if (new_perk->perk == NULL) {
        free(new_perk);
        return FAIL;
    }

    //append new_perk in linked scene_events
    if ((*perk_list)->perk == NULL) {
        *perk_list = new_perk;
        return SUCCESS;
    }
    while (cpy->next != NULL)
        cpy = cpy->next;
    cpy->next = new_perk;
    return SUCCESS;
}

int add_in_randomizer_list(void **list, player_side_e side, perks_t *perk_to_add)
{
    if (side == SURVIVOR) {
        return add_surv_perk_in_linked_list((surv_randomizer_perks_list_t **)list, perk_to_add);
    }
    if (side == KILLER) {
        return SUCCESS;
    }
    return FAIL;
}
