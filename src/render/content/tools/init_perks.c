//
// Created by nicolas on 9/24/25.
//
#include "surv_db.h"
#include "content.h"

void init_perks(void)
{
    for (int i = 0; i < NB_SURV_PERK; i++)
        SURV_PERKS_LIST[i].perk_sprite = create_sprite(NULL, SURV_PERKS_LIST[i].icon_path);
}
