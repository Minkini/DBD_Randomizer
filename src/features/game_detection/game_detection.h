//
// Created by nicolas on 10/12/25.
//

#ifndef GAME_DETECTION_H
#define GAME_DETECTION_H

#include "project.h"

typedef enum dbd_menu_state
{
    OPENED,
    CLOSED,
    WRONG,
} dbd_menu_state_e;

double compare_images(const char *path, const char *ref);
int crop_image_to_file(const char *input_path,
                       const char *output_path,
                       int crop_x, int crop_y,
                       int crop_w, int crop_h);
int capture_window_to_png(const char *window_title, const char *output_path);
int game_detection(general_t *general);
int takeGameScreenshot(void);
void initWindowHook(void);
void checkHookedWindow(void);
void destroyWindowHook(void);

typedef int (*TakeGameScreenshotFunc)(LPCWSTR window);
#endif //GAME_DETECTION_H
