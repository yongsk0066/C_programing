// 2015111888 ��ǰ������а� ��뼮
// ���� 1��
#include <stdio.h>

int num = 0;
void check(void);
int main()
{
	int num = 1;              
	{
		int num = 2;
		printf("%d\n", num);      //10�� �ٿ��� �־��� num = 2�� ��µ�
	}
	check();   //���������� ����� num�� �� 0�� ��µ�
	printf("%d\n", num); //8�� �ٿ��� �־��� 1�� ��µ�
}
void check(void) {
	printf("%d\n", num); 
}