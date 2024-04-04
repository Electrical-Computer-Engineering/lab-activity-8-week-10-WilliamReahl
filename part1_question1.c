#include <stdio.h>

int my_isalpha (char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

int my_isdigit (char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

int my_isupper (char c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

int my_toupper (char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
		return 1;
	else
		return 0;
}

int my_tolower (char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
		return 1;
	else
		return 0;
}

int main ()
{
	char x = 'c';
	int a = my_isaplha (c);
	int b = my_isdigit (c);
	int c = my_isupper (c);
	int d = my_toupper (c);
	int e = my_tolower (c);
	
	printf ("%c\n", x);
	
	printf ("%d for %c\n", a, x);
	
	printf ("%d for %c\n", b, x);
	
	printf ("%d for %c\n", c, x);
	
	printf ("%d for %c\n", d, x);
	
	printf ("%d for %c\n", e, x);
	
	return 0;
}

