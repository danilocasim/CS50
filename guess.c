#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Usage: ./guess number\n");
    }
    int number = atoi(argv[1]);
    int guess = get_int("Guess: ");

    if(number != guess) {
        printf("Wrong Guess\n");
    } else {
        printf("Correct Guess\n");
    }
}
