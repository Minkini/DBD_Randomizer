//
// Created by nicol on 05/11/2025.
//
#include "game_detection.h"

int game_detection(general_t *general)
{
    int previous = general->app_vars->dbd_menu_state;
    printf("Previous menu state: %d\n", previous);
    if (takeGameScreenshot() == FAIL)
        return FAIL;

    if (crop_image_to_file("assets/screenshots/GameScreenshot.bmp", "assets/sample/build_menu_sample.bmp", 100, 185, 85, 85) == FAIL)
        return FAIL;

    double sim = compare_images("assets/sample/build_menu_sample.bmp", "assets/references/build_menu_ref.bmp");

    if (sim >= 98.0) {
        printf("Menu is closed: %.2f%%\n", sim);
        general->app_vars->dbd_menu_state = CLOSED;
    } else {
        sim = compare_images("assets/sample/build_menu_sample.bmp", "assets/references/build_menu_open_ref.bmp");
        if (sim >= 98.0) {
            printf("Menu is opened: %.2f%%\n", sim);
            general->app_vars->dbd_menu_state = OPENED;
        } else
            printf("Bad window: %.2f%%\n", sim);
        general->app_vars->dbd_menu_state = WRONG;
    }
    return SUCCESS;
}