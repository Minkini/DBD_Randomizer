//
// Created by nicol on 30/11/2025.
//

#include "../content.h"

sfTexture *create_texture(general_t *general,  char *texture_path)
{
    sfTexture *texture = sfTexture_createFromFile(texture_path, NULL);

    if (!texture) {
        printf("create_texture: couldn't create texture\n");
        general->app_state = STOPPING;
        return NULL;
    }
    return texture;
}
