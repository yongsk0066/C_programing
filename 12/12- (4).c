//2015111888 식품생명공학과 장용석

#include <stdio.h>

int main(void)
{
	char solution[100], answer[100], ch;
	int i;
	printf("문제의 정답을 입력하세요 : ");
	//scanf("%[^\n]", solution);
	gets(solution);
	printf("\n");
	for (i = 0; i < 100; i++)
	{
		if (solution[i] != 32)
		{
			answer[i] = 95;
		}
		else answer[i] = 32;
		if (solution[i] == NULL) answer[i]=NULL;
	}
	while (strcmp(solution, answer))
	{
		printf("문자열을 입력하세요 : %s\n", answer);
		printf("글자를 추측하시오 : ");
		
		scanf("%c", &ch);
		while (getchar() != '\n');
		for (i = 0; i < 100; i++)
		{
			if (solution[i] == ch)answer[i] = ch;
		}
		printf("\n");
	}
	printf("정답입니다!\n\n");
}

