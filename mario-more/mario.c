#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void) {

    int height;

    do
    {
        // GET THE HEIGHT OF THE PYRAMID
        height = get_int("Height: ");
    }
    while(height < 0 || height == 0);

    for (int i = 0; i < height; i++){
        // PARAMETER SPACES AND BRICKS
        // DECREMENT HEIGHT BY 1
        // INCREMENT i by 1
       print_row(height - i - 1 , i + 1);
    }

}

void print_row(int spaces, int bricks) {
    // SPACES OF BRICKS TO BE RIGHT ALLIGNED BRICKS
    for (int j = 0; j < spaces; j++) {
        printf(" ");
    }
    // NUMBER OF RIGHT ALLIGNED BRICKS
    for (int i = 0; i < bricks; i++){
        printf("#");
    }
    // GAP BETWEEN THOSE RIGHT AND LEFT ALLIGNED BRICKS
    printf("  ");
    // LEFT ALLIGNED BRICKS
    for (int k = 0; k < bricks; k++){
        printf("#");
    }
    printf("\n");

}


