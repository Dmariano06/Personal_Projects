#include <stdio.h>

int tn_strlen(char *str)
	{
		int i;

		i = 0;
		while (str[i])
			i++;
		return i;
	}

int main()
{
	printf("%d", tn_strlen("abcdefg"));
}
