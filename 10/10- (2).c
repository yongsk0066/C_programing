//2015111888 식품생명공학과 장용석


#include <stdio.h>
void isSame(int a[], int b[]);


int main(void)
{
	int list1[5], list2[5];

	printf("배열 1의 원소 5개를 입력하시오 : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &list1[i]);
	printf("배열 2의 원소 5개를 입력하시오 : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &list2[i]);

	isSame(list1, list2);
	return 0;
}

void isSame(int list1[5], int list2[5])
{	
	int flag = 1;
	for (int i = 0; i < 5; i++)
	{
		if (list1[i] != list2[i])
			flag = 0;
	}
	flag ? printf("같은 배열입니다.") : printf("다른배열입니다");
	printf("\n\n");
}