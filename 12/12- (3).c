//2015111888 식품생명공학과 장용석

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char sentence[40];
	int i = 0, x;

	gets(sentence);

	for (i; i < 29;i++) {
		printf("%c", sentence[i]);
		x = sentence[i+1];
		if (isupper(x) == 1)
			printf(" ");
	}
	return 0;

}