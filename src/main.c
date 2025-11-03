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
    int nb_perk = 4;

    add_all_sided_perks((void **)&list, SURVIVOR);
    int *test = random_pick_perks((void **)&list, SURVIVOR, nb_perk);
    if (!test)
        return;
    display_perks_name(&list, test, nb_perk);
    clear_list((void **)&list, SURVIVOR);

    printf("\n");

    crop_image_to_file("assets/test/sample.png", "assets/sample/build_menu_sample.png", 80, 0, 120, 460);

    double sim = compare_images("assets/sample/build_menu_sample.png", "assets/references/build_menu_ref.png");

    if (sim >= 0 && sim >= 97.0) {
        printf("Menu is closed: %.2f%%\n", sim);
    } else {
        sim = compare_images("assets/sample/build_menu_sample.png", "assets/references/build_menu_open_ref.png");
        if (sim >= 0 && sim >= 97.0) {
            printf("Menu is opened: %.2f%%\n", sim);
        } else
            printf("Bad window: %.2f%%\n", sim);
    }
}

int main(void)
{
    //init_app();
    temp();        //TODO temporary function
    return 0;
}
