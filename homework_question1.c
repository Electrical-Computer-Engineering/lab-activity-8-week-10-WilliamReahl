#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isVowel(char c) 
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char* ToPigLatin(char* word) {
    static char pigLatin[100];
    int length = strlen(word);
    int firstVowelIndex = -1;
    int isCapitalized = isupper(word[0]);

    for (int i = 0; i < length; i++) 
    {
        if (isVowel(word[i])) 
        {
            firstVowelIndex = i;
            break;
        }
    }

    if (firstVowelIndex == 0 || (firstVowelIndex == 1 && tolower(word[0]) == 'y')) 
    {
        strcpy(pigLatin, word);
        strcat(pigLatin, "way");
    }
    else 
    {
        strcpy(pigLatin, word + firstVowelIndex);
        strncat(pigLatin, word, firstVowelIndex);
        strcat(pigLatin, "ay");
    }

    if (isCapitalized)
        pigLatin[0] = toupper(pigLatin[0]);

    return pigLatin;
}

int main() 
{
    char word[5][100];
    char *pigLatin;

    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Word %d: ", i + 1);
        scanf("%s", word[i]);
    }

    printf("\nPig Latin versions:\n");
    for (int i = 0; i < 5; i++) 
    {
        pigLatin = ToPigLatin(word[i]);
        printf("%s ", pigLatin);
    }

    return 0;
}
