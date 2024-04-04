#include <stdio.h>
#include <stdlib.h>

int my_stringlength (char s1[])
{
	int i = 0;
	
	while (s1[i] != '\0')
	
		i++;
	
	return i;
}

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
	
	return s1[];
}

char* my_reverse (char s1[])
{
	int i = my_stringlength;
	char start = s1[];
	char end = s1[] + i - 1;
	
	while (star < end)
	{
		char temp = start;
		start = end;
		end = temp;
		start++;
		end--;
	}
	
	return s1[];
}

int main ()
{
	char A [32] = "Tuesday";
	char B [32] = "Thursday";
	int a;
	
	a = my_strcmp (A,B);
	
	printf ("%d for %s and %s", a, A, B);
	
	printf ("%d for abcd and abcd", my_strcmp ("abcd", "abcd"));
	
	printf ("%d for abcd and abcd", my_strncmp ("abcd", "abcd"));
	
	printf ("Copied string", my_strcpy ("A", "B"));
	
	printf ("String added", my_strcat ("A", "B"));
	
	printf ("String reversed", my_reverse ("A"));

	return 0;
}
