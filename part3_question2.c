#include <stdio.h>
#include <string.h>

#define MAX 32

void removeMatchingChars(char *s1, const char *s2) 
{
    int hash[256] = {0};

    for (int i = 0; s2[i] != '\0'; i++) {
        hash[(unsigned char)s2[i]] = 1;
    }

    int srcIndex = 0, destIndex = 0;

    while (s1[srcIndex]) 
    {
        if (!hash[(unsigned char)s1[srcIndex]]) 
        {
            s1[destIndex++] = s1[srcIndex];
        }
        srcIndex++;
    }

    s1[destIndex] = '\0';
}

int main() 
{
    char s1[MAX], s2[MAX];

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';

    removeMatchingChars(s1, s2);

    printf("String after removing matching characters: %s\n", s1);

    return 0;
}
