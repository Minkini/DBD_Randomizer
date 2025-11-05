//
// Created by nicolas on 10/12/25.
//

#include "project.h"
#include "../game_detection.h"
#include "stb_image.h"
#include "stb_image_write.h"

int crop_image_to_file(const char *input_path,
                       const char *output_path,
                       int crop_x, int crop_y,
                       int crop_w, int crop_h)
{
    int width, height, channels;
    unsigned char *img = stbi_load(input_path, &width, &height, &channels, 0);

    if (!img) {
        fprintf(stderr, "Failed to load image: %s\n", input_path);
        return ERROR;
    }
    if (crop_x < 0 || crop_y < 0 ||
        crop_x + crop_w > width || crop_y + crop_h > height) {
        fprintf(stderr, "Error: crop size limits (%dx%d)\n", width, height);
        stbi_image_free(img);
        return ERROR;
    }
    unsigned char *output = malloc(crop_w * crop_h * channels);

    if (!output) {
        fprintf(stderr, "Failed to allocate output image\n");
        stbi_image_free(img);
        return ERROR;
    }
    for (int y = 0; y < crop_h; y++) {
        for (int x = 0; x < crop_w; x++) {
            for (int c = 0; c < channels; c++) {
                int src_index = ((y + crop_y) * width + (x + crop_x)) * channels + c;
                int dst_index = (y * crop_w + x) * channels + c;
                output[dst_index] = img[src_index];
            }
        }
    }
    if (!stbi_write_png(output_path, crop_w, crop_h, channels, output, crop_w * channels)) {
        fprintf(stderr, "Erreur : impossible d'écrire le fichier %s\n", output_path);
        free(output);
        stbi_image_free(img);
        return 1;
    }
    stbi_image_free(img);
    free(output);
    return SUCCESS;
}
