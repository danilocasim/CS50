#include <cs50.h>
#include <stdio.h>

int strlength(string s);

int main(void)
{
    string name = get_string("Name: ");
    int length = strlength(name);
    printf("%i\n", length);
}


int strlength(string s) {
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }
    return n;
}
