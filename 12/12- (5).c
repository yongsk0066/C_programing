//2015111888 ��ǰ������а� ��뼮

#include <stdio.h>
#include <string.h>



char seps[] = " ,\t\n";
char *token;

int main(void)
{
	char sentence[1000];

	printf("���ڿ��� �Է��ϼ��� : \n");
	scanf("%[^^Z]", sentence);

	token = strtok(sentence, seps);
	while (token != NULL) 
	{

		printf("�ܾ�: %10s ���� : %5d\n", token, strlen(token));
		token = strtok(NULL, seps); 
	}

}
