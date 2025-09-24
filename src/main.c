//
// Created by nicolas on 8/31/25.
//

#include "app.h"
#include "project.h"
#include "tools/randomizer/randomizer.h"

static void display_perks_name(surv_randomizer_perks_list_t **list,
    int *id_perks_picked, int nb_random_perks_pick)
{
    int offset = 0;
    surv_randomizer_perks_list_t *cpy = *list;

    for (int i = 0; i < nb_random_perks_pick; i++) {
        for (int j = 0; j < id_perks_picked[i] - offset; j++) {
            cpy = cpy->next;
        }
        printf("%s\n", cpy->perk->en_name);
        offset = id_perks_picked[i];
    }
}

int main(void)
{
    surv_randomizer_perks_list_t *list = calloc(1, sizeof(surv_randomizer_perks_list_t));
    int nb_perk = 4;

    add_all_sided_perks((void **)&list, SURVIVOR);
    add_all_sided_perks((void **)&list, SURVIVOR);
    int *test = random_pick_perks((void **)&list, SURVIVOR, nb_perk);
    if (!test)
        return 1;
    display_perks_name(&list, test, nb_perk);
    clear_list((void **)&list, SURVIVOR);
    init_app();
    return 0;
}
