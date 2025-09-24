//
// Created by nicolas on 9/15/25.
//

#include "project.h"
#include "surv_db.h"
#include "randomizer.h"

static void sort_int_array(int *array, int length)
{
    int temp;
    int swapped;

    do {
        swapped = 0;
        for (int i = 0; i < length - 1; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

static void add_random_number_in_array(int *id_perks_picked,
    int nb_random_perks_pick, int count_perks_in_list)
{
    srand(time(NULL));
    for (int i = 0; i < nb_random_perks_pick; i++) {
        int nb = rand() % count_perks_in_list;
        for (int j = 0; j < i; j++) {
            if (nb == id_perks_picked[j]) {
                nb = rand() % count_perks_in_list;
                j = -1;
            }
        }
        id_perks_picked[i] = nb;
    }
}

static int *pick_n_random_surv_perks(surv_randomizer_perks_list_t **perks, int nb_random_perks_pick)
{
    int count_perks_in_list = 0;
    surv_randomizer_perks_list_t *cpy = *perks;
    int *id_perks_picked = malloc(sizeof(int) * nb_random_perks_pick);

    if (!id_perks_picked || !cpy)
        return NULL;

    while (cpy->next != NULL) {
        count_perks_in_list++;
        cpy = cpy->next;
    }
    if (count_perks_in_list < nb_random_perks_pick) {
        free(id_perks_picked);
        return NULL;
    }
    add_random_number_in_array(id_perks_picked, nb_random_perks_pick, count_perks_in_list);
    sort_int_array(id_perks_picked, nb_random_perks_pick);
    return id_perks_picked;
}

int *random_pick_perks(void **list, player_side_e side, int nb_random_perks_pick)
{
    if (nb_random_perks_pick < MIN_RANDOM_PERKS_PICK || nb_random_perks_pick > MAX_RANDOM_PERKS_PICK)
            return NULL;
    if (side == SURVIVOR)
        return pick_n_random_surv_perks((surv_randomizer_perks_list_t **)list, nb_random_perks_pick);
    return NULL;
}
