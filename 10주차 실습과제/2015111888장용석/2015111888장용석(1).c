//2015111888 ��ǰ������а� ��뼮

#include <stdio.h>

void main() {
	char *ptrArray[2];
	char **ptrptr;
	int i;

	ptrArray[0] = "Dongguk";
	ptrArray[1] = "Engineering";

	ptrptr = ptrArray;
	printf("\n ptrArray[0]�� ���� ");
	printf("\n ptrArray[0]�� �ּ� = %d", &ptrArray[0]);
	printf("\n ptrArray[0]�� �� = %d", ptrArray[0]);
	printf("\n ptrArray[0]�� ������ = %c", *ptrArray[0]);
	printf("\n ptrArray[0]�� �������ڿ� = %s \n", ptrArray[0]);

	printf("\n ptrArray[1]�� ���� ");
	printf("\n ptrArray[1]�� �ּ� = %d", &ptrArray[1]);
	printf("\n ptrArray[1]�� �� = %d", ptrArray[1]);
	printf("\n ptrArray[1]�� ������ = %c", *ptrArray[1]);
	printf("\n ptrArray[1]�� �������ڿ� = %s \n", ptrArray[1]);

	printf("\n ptrptr�� ���� ");
	printf("\n ptrptr�� �ּ� = %d", &ptrptr);
	printf("\n ptrptr�� �� = %d", ptrptr);
	printf("\n ptrptr�� 1�� ������ = %d", *ptrptr);
	printf("\n ptrptr�� 2�� ������ = %c", **ptrptr);
	printf("\n ptrptr�� 2�� �������ڿ� = %s", ptrptr[0]);

	printf("\n\n *ptrArray[0] : ");
	for (i = 0; i < 7; i++)
		printf("%c", ptrptr[0][i]);
	printf("\n **ptrptr : ");
	for (i = 0; i < 7; i++)
		printf("%c", (*ptrptr)[i]);

	printf("\n\n *ptrArray[1] : ");
	for (i = 0; i < 11; i++)
		printf("%c", ptrptr[1][i]);

	printf("\n **(ptrptr+1) : ");
	for (i = 0; i < 11; i++)
		printf("%c", (*(ptrptr+1))[i]);
	printf("\n\n");
	return 0;



}