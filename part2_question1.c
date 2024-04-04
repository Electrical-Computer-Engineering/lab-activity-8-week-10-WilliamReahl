#include <stdio.h>
#include <stdlib.h>

int my_strcmp (char s1[], char s2[])
{
	int i = 0;
	
	while (s1[i] == s2[i] && s1[i] != '\0' && s1[i] != '\0')
	
		i++;
		
	if (s1[i] != s2[i])
		return 1;
	else
		if (s1[i] == '\0' && s2[i] == '\0')
			return 0;
		else
			return 1;
}

int my_strncmp (char s1[], char s2[])
{
	int i = 0;
	
	while (s1[i] == s2[i] && s1[i] != '\0' && s1[i] != '\0' && i<2)
	
		i++;
		
	if (s1[i] != s2[i])
		return 1;
	else
		if (s1[i] == '\0' && s2[i] == '\0')
			return 0;
		else
			return 1;
}

char* my_strcpy (char s1[], char s2[])
{
	int i = 0;
	
	while (s1[i] && s1[i] != '\0')
		
		s2[i] = s1[i];
		i++;
}

char* my_strcat (char s1[], char s2[])
{
	int i = 0;
	
	while (s1[i] != '\0')
		
		i++;
		
	while (s2[i] != '\0')
	
		s1[] = s2[];
		s1[]++;
		s2[]++;
		
	s1[] = '\0';
	
	return = s1[];
}

int my_reverse (char s1[], char s2[])
{
	
}

int main ()
{
	char A [32] = "Tuesday";
	char B [32] = "Thursday";
	int a;
	
	a = my_strcmp (A,B);
	
	printf ("%d for %s and %s", a, A, B);
	
	printf ("%d for abcd and abcd", my_strcmp ("abcd", "abcd"));
}
