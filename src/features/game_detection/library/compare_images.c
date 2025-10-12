//
// Created by nicolas on 10/12/25.
//

#include "game_detection.h"
#include "stb_image.h"
#include <math.h>
#include "project.h"

double compare_images(const char *path1, const char *path2)
{
    int w1, h1, n1;
    int w2, h2, n2;
    unsigned char *img1 = stbi_load(path1, &w1, &h1, &n1, 0);
    unsigned char *img2 = stbi_load(path2, &w2, &h2, &n2, 0);

    if (!img1 || !img2) {
        fprintf(stderr, "Failed to load images\n");
        if (img1)
            stbi_image_free(img1);
        if (img2)
            stbi_image_free(img2);
        return ERROR;
    }
    if (w1 != w2 || h1 != h2 || n1 != n2) {
        fprintf(stderr, "Erreur : les images n'ont pas la même taille ou les mêmes canaux\n");
        stbi_image_free(img1);
        stbi_image_free(img2);
        return ERROR;
    }

    double diff = 0.0;
    int total_pixels = w1 * h1 * n1;

    for (int i = 0; i < total_pixels; i++) {
        double x = fabs((double)img1[i] - (double)img2[i]);
        diff += x;
    }
    diff /= total_pixels;
    stbi_image_free(img1);
    stbi_image_free(img2);

    double similarity = 100.0 * (1.0 - (diff / 255.0));
    if (similarity < 0)
        similarity = 0;
    return similarity;
}
