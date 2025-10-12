//
// Created by nicolas on 8/31/25.
//

#include "app.h"
#include "project.h"
#include "features/randomizer/randomizer.h"
#include "features/game_detection/game_detection.h"

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

static void temp(void)
{
    surv_randomizer_perks_list_t *list = calloc(1, sizeof(surv_randomizer_perks_list_t));
    int nb_perk = 3;

    add_surv_perks_by_characters((void **)&list, MEG);
    int *test = random_pick_perks((void **)&list, SURVIVOR, nb_perk);
    if (!test)
        return;
    display_perks_name(&list, test, nb_perk);
    clear_list((void **)&list, SURVIVOR);

    printf("\n");
    double sim = compare_images("assets/references/build_menu_ref.png", "assets/references/build_menu_open_ref.png");

    if (sim >= 0)
        printf("Similarité: %.2f%%\n", sim);
    crop_image_to_file("assets/references/build_menu_ref.png", "assets/references/test.png", 0, 0, 300, 1080);
}

int main(void)
{
    init_app();
    temp();        //TODO temporary function
    return 0;
}
