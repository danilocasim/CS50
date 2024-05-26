#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{

    // PROMPT THE USER SOME TEXT
    strexing tt = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Compute the Coleman-Liau index
    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sentences / (float) words) * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);
    // Print the grade level

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    // RETURN THE NUMBER OF LETTER IN TEXT
    int letters = 0;
    for (int i = 0, j = strlen(text); i < j; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    // RETURN THE NUMBER OF WORDS IN TEXT
    int words = 1;
    for (int i = 0, j = strlen(text); i < j; i++)
    {
        if (isblank(text[i]))
        {
            words++;
        }
    }
    return words;
}

int count_sentences(string text)
{
    // RETURN THE NUMBER OF SENTENCES IN TEXT
    int sentence = 0;
    for (int i = 0, j = strlen(text); i < j; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence++;
        }
    }
    return sentence;
}
