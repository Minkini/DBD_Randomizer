//
// Created by nicolas on 8/31/25.
//

#include "app.h"
#include "project.h"
#include "event.h"

int run_app(general_t *general)
{
    general->running = 1;
    while (general->running) {
        handle_event(general);
    }
    stop_app(general);
    return SUCCESS;
}
