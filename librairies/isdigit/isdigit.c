#include <stdio.h>

int tn_isdigit(char c)
{
	if (c >= '0' && c <= '9')
	       return 1;
	else
		return 0;
}

int main()
{
	printf("%d",tn_isdigit('A'));
}
