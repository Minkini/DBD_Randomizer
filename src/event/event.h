//
// Created by nicolas on 8/31/25.
//

#ifndef EVENT_H
#define EVENT_H

void handle_event(general_t *general, void (*update)(general_t *general));

void main_menu_scene_update(general_t *general);
#endif //EVENT_H
