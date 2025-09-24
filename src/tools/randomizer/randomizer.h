//
// Created by nicolas on 9/15/25.
//

#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include "surv_db.h"

#define MAX_RANDOM_PERKS_PICK 4
#define MIN_RANDOM_PERKS_PICK 1

typedef enum {
    SURVIVOR = 0,
    KILLER = 1,
} player_side_e;

typedef struct surv_randomizer_perks_list_s {
    surv_perks_t *perk;
    struct surv_randomizer_perks_list_s *next;
} surv_randomizer_perks_list_t;

int add_in_randomizer_list(void **list, player_side_e side, surv_perks_t *perk_to_add);
int *random_pick_perks(void **list, player_side_e side, int nb_random_perks_pick);
int add_surv_perks_by_characters(void **list, char *character);
int add_all_sided_perks(void **list, player_side_e side);
void clear_list(void **list, player_side_e side);
surv_randomizer_perks_list_t *create_surv_first_list_node(void);
#endif //RANDOMIZER_H
