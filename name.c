#include <stdio.h>
#include <cs50.h>


int main(void){

    string firstName = get_string("What is your first name? ");
    string lastName = get_string("What is your last name? ");

    printf("Hi, my name is %s %s\n", firstName, lastName);
}
