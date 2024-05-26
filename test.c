#include <cs50.h>
#include <stdio.h>


int main(void){
    int calls = 4;
    calls += 1;
    calls -= 2;
    calls *= 3;
    calls /= 2;

    printf("%i\n", calls);
}
