//
// Created by nicolas on 9/15/25.
//

#include "project.h"
#include "db.h"
#include "../randomizer.h"
#include "content/content.h"

static int add_surv_perk_in_linked_list(randomizer_perks_list_t **perk_list, perks_t *perk_to_add)
{
    randomizer_perks_list_t *new_perk = malloc(sizeof(randomizer_perks_list_t));
    randomizer_perks_list_t *cpy = *perk_list;
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

int add_in_randomizer_list(general_t *general, player_side_e side, perks_t *perk_to_add)
{
    if (side == SURVIVOR) {
        return add_surv_perk_in_linked_list(&general->content->surv_perk_list, perk_to_add);
    }
    if (side == KILLER) {
        return add_surv_perk_in_linked_list(&general->content->killer_perk_list, perk_to_add);
    }
    return FAIL;
}
