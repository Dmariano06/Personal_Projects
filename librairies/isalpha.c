#include <stdio.h>

int	tn_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 2;
	else
		return 0;
}

int main()
{
	printf("%d", tn_isalpha('5'));
}
