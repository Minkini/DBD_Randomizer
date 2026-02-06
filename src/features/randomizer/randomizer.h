//
// Created by nicolas on 9/15/25.
//

#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include "db.h"

#define MAX_RANDOM_PERKS_PICK 4
#define MIN_RANDOM_PERKS_PICK 1

typedef enum {
    SURVIVOR = 0,
    KILLER = 1,
} player_side_e;

typedef struct randomizer_perks_list_s {
    perks_t *perk;
    struct randomizer_perks_list_s *next;
} randomizer_perks_list_t;

int add_in_randomizer_list(general_t *general, player_side_e side, perks_t *perk_to_add);
void random_pick_perks(general_t *general, player_side_e side, build_t *build);
int add_surv_perks_by_characters(general_t *general, char *character, player_side_e side);
int add_all_sided_perks(general_t *general, player_side_e side);
void clear_sided_list(general_t *general, player_side_e side);
randomizer_perks_list_t *create_surv_first_list_node(void);
void remove_in_linked_list(void **list, player_side_e side, perks_t *perk_to_remove);
int remove_surv_perks_by_characters(void **list, char *character);
void exec_randomizer(general_t *general);
#endif //RANDOMIZER_H
