//
// Created by nicolas on 9/16/25.
//

#include "project.h"
#include "../randomizer.h"

int add_surv_perks_by_characters(void **list, char *character)
{
    for (int i = 0; i < NB_SURV_PERK; i++) {
        if (strcmp(character, SURV_PERKS_LIST[i].owner_name) == 0) {
            add_in_randomizer_list(list, SURVIVOR, &SURV_PERKS_LIST[i]);
        }
    }
    return SUCCESS;
}
