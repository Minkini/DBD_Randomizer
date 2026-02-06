//
// Created by nicolas on 9/16/25.
//

#include "../randomizer.h"
#include "project.h"
#include "content/content.h"

int add_all_sided_perks(general_t *general, player_side_e side)
{
    if (side == SURVIVOR) {
        clear_sided_list(general, SURVIVOR);
        for (int i = 0; i < NB_SURV_PERK; i++) {
            add_in_randomizer_list(general, SURVIVOR, &SURV_PERKS_LIST[i]);
        }
        return SUCCESS;
    }
    if (side == KILLER) {
        clear_sided_list(general, KILLER);
        for (int i = 0; i < NB_KILLER_PERK; i++) {
            add_in_randomizer_list(general, KILLER, &KILLER_PERKS_LIST[i]);
        }
        return SUCCESS;
    }
    return FAIL;
}
