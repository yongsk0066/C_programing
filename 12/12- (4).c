//2015111888 ��ǰ������а� ��뼮

#include <stdio.h>

int main(void)
{
	char solution[100], answer[100], ch;
	int i;
	printf("������ ������ �Է��ϼ��� : ");
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
		printf("���ڿ��� �Է��ϼ��� : %s\n", answer);
		printf("���ڸ� �����Ͻÿ� : ");
		
		scanf("%c", &ch);
		while (getchar() != '\n');
		for (i = 0; i < 100; i++)
		{
			if (solution[i] == ch)answer[i] = ch;
		}
		printf("\n");
	}
	printf("�����Դϴ�!\n\n");
}

