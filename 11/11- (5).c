//2015111888 ��ǰ������а� ��뼮


#include <stdio.h>

int main(void)
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *parray = array;	int i;	for (i = 0; i < 10; i++) printf("%d ", ++*parray);
}