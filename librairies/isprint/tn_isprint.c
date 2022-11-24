#include <stdio.h>

int tn_isprint(char c)
{
	if (c >= 33 && c <= 126)
		return 1;
	else
		return 0;
}

int main()
{
	printf("%d", tn_isprint('a'));
}
