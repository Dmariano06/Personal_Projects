#include <stdio.h>

char tn_memset(char *str, char c, int i)
{
	int y;

	y = 0;
	while (y <= i)
	{
		str[y] = c;
		y++;
	}
	return *str;
}

int main()
{
	printf("%s",tn_memset("Abcd", '$', 2));
}
