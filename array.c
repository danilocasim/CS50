#include <cs50.h>
#include <stdio.h>

int main(void)
{

    //GET THE LENGTH FROM THE USER
    int length;
    do
    {
        length = get_int("Length: ");
    }
    while (length < 1);

    //DECLARE OUR FIRST ARRAY
    int twice[length];

    //SET THE FIRST VALUE
    twice[0] = 1;
    printf("%i\n", twice[0]);

    for(int i = 1; i < length; i++)
    {
        //MAKE THE CURRENT ELEMENT TWICE AS PREVIOUS
        twice[i] = 2 * twice[i - 1];

        //PRINT THE CURRENT ELEMENT
        printf("%i\n", twice[i]);
    }


}