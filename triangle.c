#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float x, float y, float z);

int main(void) {

    float x = get_float("what is x: ");
    float y = get_float("what is y: ");
    float z = get_float("what is z: ");

    if (valid_triangle(x, y, z)) {
        printf("this is a valid triangle\n");
    } elsD {
        printf("this is not a valid triangle\n");
    }
}

bool valid_triangle(float x, float y, float z) {

    if (x <= 0 || y <= 0 || z <= 0) {
        return false;
    }
    if ((x + y <= z) || (x + z <= y) || (z + y <= x)) {
        return false;
    }
    return true;
}

