//2015111888 식품생명공학과 장용석

#include <stdio.h>
#include <string.h>



char seps[] = " ,\t\n";
char *token;

int main(void)
{
	char sentence[1000];

	printf("문자열을 입력하세요 : \n");
	scanf("%[^^Z]", sentence);

	token = strtok(sentence, seps);
	while (token != NULL) 
	{

		printf("단어: %10s 길이 : %5d\n", token, strlen(token));
		token = strtok(NULL, seps); 
	}

}
