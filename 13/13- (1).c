//2015111888��ǰ������а� ��뼮

#include <stdio.h>
#include <math.h>

int main(void)
{
	typedef struct
	{
		int x;
		int y;
	} rectangle;

	rectangle a, b;

	printf("������ ��ǥ�� �Է��ϼ���\n");
	printf("x��ǥ : ");
	scanf("%d", &a.x);
	printf("y��ǥ : ");
	scanf("%d", &a.y);

	printf("�� �ٸ����� ��ǥ�� �Է��ϼ���\n");
	printf("x��ǥ : ");
	scanf("%d", &b.x);
	printf("y��ǥ : ");
	scanf("%d", &b.y);

	printf("�Է¹��� �� ������ ������ ���簢���� ���� : %d\n\n", abs(a.x - b.x)*abs(a.y - b.y));

	return 0;

}