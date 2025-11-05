//
// Created by nicolas on 8/31/25.
//

#include "project.h"
#include "../render/window/window.h"
#include "app.h"
#include "../render/content/content.h"

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
    load_content(general);
    run_app(general);
}
