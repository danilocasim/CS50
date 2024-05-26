#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name? ");
    int age = get_int("How old are you? ");
    string phone_number = get_string("What is your phone number? ");

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Contacts: %s\n", phone_number);

}
