//
// Created by nicol on 30/11/2025.
//
#include "project.h"
#include "../content.h"

void update_buttons(general_t *general, sfSprite *sprite, sfTexture *neutral, sfTexture *over, sfTexture *press, void (*func)(general_t *general))
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(general->window);
    sfVector2u winSize = sfRenderWindow_getSize(general->window);

    sfVector2f mousePosF = {
        mousePos.x * (1920.0f / winSize.x),
        mousePos.y * (1080.0f / winSize.y)
    };

    sfFloatRect spriteBounds = sfSprite_getGlobalBounds(sprite);

    if (sfFloatRect_contains(&spriteBounds, mousePosF)) {
        if (over) {
            if (general->event.type == sfEvtMouseButtonPressed && general->event.mouseButton.button == sfMouseLeft && press) {
                sfSprite_setTexture(sprite, press, false);
                if (func)
                    func(general);
            } else
                sfSprite_setTexture(sprite, over, false);
        }
    } else
        sfSprite_setTexture(sprite, neutral, false);
}