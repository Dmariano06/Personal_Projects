#include <stdio.h>

int tn_isascii(char c)
{
	if (c > 0 && c <= 128)
		return 1;
	else
		return 0;
}

int main ()
{
	printf("%d", tn_isascii('¤'));
}
