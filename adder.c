#include <cs50.h>
#include <stdio.h>


int adder(int a, int b);

int main(void){

    int x = get_int("X: ");
    int y = get_int("y: ");

    int z = adder(x, y);

    printf("the sum is %i\n", z);
}

int adder(int a, int b){
    return a + b;
}
