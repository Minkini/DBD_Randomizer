//
// Created by nicol on 01/12/2025.
//
#include "../randomizer.h"
#include "project.h"
#include "content/content.h"

void exec_randomizer(general_t *general)
{
    build_t *build = calloc(1, sizeof(build_t));

    if (!build)
        return;
    add_all_sided_perks(general, KILLER); //TODO test
    random_pick_perks(general, KILLER, build);
    clear_sided_list(general, KILLER); //TODO test
}
