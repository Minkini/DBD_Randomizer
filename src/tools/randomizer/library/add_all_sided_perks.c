//
// Created by nicolas on 9/16/25.
//

#include "randomizer.h"
#include "project.h"

int add_all_sided_perks(void **list, player_side_e side)
{
    if (side == SURVIVOR) {
        for (int i = 0; i < NB_SURV_PERK; i++) {
            add_in_randomizer_list(list, SURVIVOR, &SURV_PERKS_LIST[i]);
        }
        return SUCCESS;
    }
    return ERROR;
}