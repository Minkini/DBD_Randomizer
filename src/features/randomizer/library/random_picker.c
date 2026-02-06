//
// Created by nicolas on 9/15/25.
//

#include "project.h"
#include "db.h"
#include "../randomizer.h"
#include "content/content.h"

static int get_list_len(randomizer_perks_list_t **list)
{
    int count = 0;
    randomizer_perks_list_t *list_tmp = *list;

    while (list_tmp) {
        count++;
        list_tmp = list_tmp->next;
    }
    return count;
}

static int cmp_int(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

static int *generate_unique_random_sorted(int n, int max)
{
    int *arr;
    int i;
    int value;

    if (n <= 0 || max <= 0 || n > max)
        return NULL;

    arr = malloc(sizeof(int) * n);
    if (!arr)
        return NULL;

    for (i = 0; i < n; ) {
        value = rand() % max;

        for (int j = 0; j < i; j++) {
            if (arr[j] == value)
                break;
            if (j == i - 1) {
                arr[i++] = value;
                break;
            }
        }

        if (i == 0) {
            arr[i++] = value;
        }
    }
    qsort(arr, n, sizeof(int), cmp_int);
    return arr;
}

static void pick_n_random_perks(randomizer_perks_list_t **perks, int nb_random_perks_pick, build_t *build, player_side_e side)
{
    int len = get_list_len(perks);
    randomizer_perks_list_t *cpy = *perks;
    int *random_perks = generate_unique_random_sorted(nb_random_perks_pick, len);
    if (!random_perks)
        return;
    int j = 0;

    build->side = side;
    for (int i = 0; i < nb_random_perks_pick; i++) {
        int offset = random_perks[i];
        for (; j < offset; j++)
            cpy = cpy->next;
        switch (i) {
            case 1:
                build->perk2 = cpy->perk;
                break;
            case 2:
                build->perk3 = cpy->perk;
                break;
            case 3:
                build->perk4 = cpy->perk;
                break;
            default:
                build->perk1 = cpy->perk;
                break;
        }
    }
    free(random_perks);
}

void random_pick_perks(general_t *general, player_side_e side, build_t *build)
{
    if (general->content->variables->nb_perks_to_pick < MIN_RANDOM_PERKS_PICK || general->content->variables->nb_perks_to_pick > MAX_RANDOM_PERKS_PICK)
            return;
    if (side == SURVIVOR)
        pick_n_random_perks(&general->content->surv_perk_list, general->content->variables->nb_perks_to_pick, build, side);
    if (side == KILLER)
        pick_n_random_perks(&general->content->killer_perk_list, general->content->variables->nb_perks_to_pick, build, side);
    printf("side: %d\n", build->side);
    printf("perk1: %s\n", build->perk1->en_name);
    printf("perk2: %s\n", build->perk2->en_name);
    printf("perk3: %s\n", build->perk3->en_name);
    printf("perk4: %s\n", build->perk4->en_name);
    printf("------------------------------------\n");
}
