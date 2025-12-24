//
// Created by nicol on 01/12/2025.
//
#include "../randomizer.h"
#include "project.h"
#include "content/content.h"

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

static int get_perk_id_by_name(char *perk_name)
{
    for (int i = 0; SURV_PERKS_LIST[i].id != -1; i++){
        if (!strcmp(SURV_PERKS_LIST[i].en_name, perk_name))
            return SURV_PERKS_LIST[i].id;
    }
    return 0;
}

static void create_surv_hash_build(surv_randomizer_perks_list_t **list, void *item, void *addons, void *offering)
{
    (void)item;
    (void)addons;
    (void)offering;

    char *hash = NULL;
    surv_randomizer_perks_list_t *cpy = *list;
    int perk1, perk2, perk3, perk4 = 0;

    asprintf(&hash, "%03d;%03d;%03d;%03d;%02d,%02d,%02d;%02dversion alpha",
        perk1, perk2, perk3, perk4, 0, 0, 0, 0);
}

void exec_randomizer(general_t *general)
{
    add_all_sided_perks((void **)&general->content->surv_perk_list, SURVIVOR); //TODO test
    int *security = random_pick_perks((void **)&general->content->surv_perk_list, SURVIVOR, general->content->variables->nb_perks_to_pick);
    if (!security)
        return;
    display_perks_name(&general->content->surv_perk_list, security, general->content->variables->nb_perks_to_pick);
    clear_list((void **)&general->content->surv_perk_list, SURVIVOR); //TODO test
}
