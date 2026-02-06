//
// Created by nicolas on 9/16/25.
//

#include "project.h"
#include "../randomizer.h"
#include "content/content.h"

int add_surv_perks_by_characters(general_t *general, char *character, player_side_e side)
{
    if (side == SURVIVOR) {
        for (int i = 0; i < NB_SURV_PERK; i++) {
            if (strcmp(character, SURV_PERKS_LIST[i].owner_name) == 0) {
                add_in_randomizer_list(general, SURVIVOR, &SURV_PERKS_LIST[i]);
            }
        }
    }
    if (side == KILLER) {
        for (int i = 0; i < NB_KILLER_PERK; i++) {
            if (strcmp(character, KILLER_PERKS_LIST[i].owner_name) == 0) {
                add_in_randomizer_list(general, KILLER, &SURV_PERKS_LIST[i]);
            }
        }
    }
    return SUCCESS;
}
