//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "../render/window/window.h"
#include "app.h"
#include "../render/content/content.h"
#include "../features/game_detection/game_detection.h"

void init_app(void)
{
    general_t *general = calloc(1, sizeof(general_t));

    if (general == NULL) {
        return;
    }
    if (create_window(general) == FAIL) {
        free(general);
        return;
    }
    SetConsoleOutputCP(CP_UTF8);
    load_content(general);
    initWindowHook();
    run_app(general);
}
