#include <stdio.h>
#include <string.h>
#include <cs50.h>

void game();

int main()
{
    string ans = get_string("Do you want to play? ");

    if (strcmp(ans, "Yes") == 0)
    {
        game();
    }
    else if (strcmp(ans, "No") == 0)
    {
        printf("Thank you.\n");
    }
    return 0;
}

void game()
{
    int score = 0;
    int overall = 5;


    for (int i = 1; i <= 5; i++)
    {
        int shoot = get_int("Shoot or Miss? ");

        if (shoot == 1)
        {
            printf("Shot : Good\n");
            score = score + 1;
            printf("Score: %i\n", score);
        }
        else if (shoot == 0)
        {
            printf("Shot : Bad\n");
            score = score + 0;
            printf("Score: %i\n", score);
        }
    }

    int total = score;
    printf("Score : %i / %i\n\n", score, overall);

    if (total == 5)
    {
        printf("Prize : 1 Bag\n");
    }
    else if (total == 4)
    {
        printf("Prize : 4 Notebook\n");
    }
    else if (total == 3)
    {
        printf("Prize : 3 Ballpen\n");
    }
    else if (total == 2)
    {
        printf("Prize : 1 Eraser\n");
    }
    else if (total == 1)
    {
        printf("Prize : 1 Ruler\n");
    }
    else {
        printf("No Prize\n");
    }
}