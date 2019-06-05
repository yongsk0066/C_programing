//2015111888 식품생명공학과 장용석

#include <stdio.h>

int main(void)
{
	char word[10], i;
	scanf("%s", word);
	for (i = 9; i >= 0 ; i--)
	{
		if ((word[i] !=  NULL)&&(word[i] != -52)) {
			printf("%c", word[i]);
		}
	}
	
}

