#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shiftleft (char s1[])
{
	char temp = s1[0];
	int length = strlen(s1[]);
	
	for (int i = 0; i < length - 1; i++)
	{
		s1[i] = s1 [i +1];
	}
	s1[length -1] = temp;
}

int main ()
{
	char s1[] = "HIESE124";
	int itterations = strlen(s1[]);
	
	for (int i = 0; i < itterations; i++)
	{
		shiftleft(s1[]);
		printf("Shifted left string: %s\n", str);
	}
	
	return 0;
}
