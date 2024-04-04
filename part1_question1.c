#include <stdio.h>

int my_isalpha (char c)
{
	return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}

int my_isdigit (char c)
{
	return c >= '0' && c <= '9';
}

int my_isupper (char c)
{
	return c >= 'A' && c <= 'Z';
}

int my_toupper (char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 'a' + 'A';
	}
	
	return c;
}

int my_tolower (char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return c - 'A' + 'a';
	}
	
	return c;
}

int main ()
{
	char c;
	
	my_isdigit(c);
	
	my_isalpha(c);
	
	my_isupper(c);
	
	my_toupper(c);
	
	my_tolower(c);
	
	return 0;
}
