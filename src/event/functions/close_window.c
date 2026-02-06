//
// Created by nicol on 04/02/2026.
//

#include "functions.h"

void button_close_window(general_t *general)
{
    general->app_state = STOPPING;
}