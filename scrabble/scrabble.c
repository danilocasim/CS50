#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// POINTS ASSIGNED TO EACH LETTER OF THE ALPHABET
const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{

    // PROMPTS THE USER FOR TWO WORDS
    string word[2];
    for (int i = 0; i < 2; i++)
    {
        word[i] = get_string("Player %i: ", i + 1);
    }
    // COMPUTE THE SCORE OF EACH WORD
    int score[2];
    score[0] = compute_score(word[0]);
    score[1] = compute_score(word[1]);

    // PRINT THE WINNER
    if (score[0] > score[1])
    {
        printf("Player 1 wins\n");
    }
    else if (score[0] < score[1])
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{

    // KEEP TRACK OF SCORE
    int score = 0;
    int length = strlen(word);

    // COMPUTE SCORE FOR EACH CHARACTER
    for (int i = 0; i < length; i++)
    {

        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
