#include <cs50.h>
#include <stdio.h>


int main(void) {

int x = get_int("Enter the x: ");
int y = get_int("Enter the y: ");

if (x < y) {
    printf("x is less than y or %i is less than %i\n", x, y);
} else if (x > y) {
    printf("x is greater than y or %i is greater than %i\n", x, y);
} else {
    printf("x is equal to y or %i is equal to %i\n", x, y);
}
}
