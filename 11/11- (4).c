//2015111888 ��ǰ������а� ��뼮


#include <stdio.h>
int main() {
	int i = 3, *pi;
	char a = 'A', *pa;
	double b = 3.1, *pb;
	int arr[5] = { 5,10,15,20,25 }, *parr;
	pi = &i; //i�� �ּҰ� ��
	pa = &a; //a�� �ּҰ� ��
	pb = &b; //b�� �ּҰ� ��
	parr = arr; //arr �� �ּҰ� ��
	printf("%d %d \n", i, &i); //i�� ���� i�� �ּҰ� ��µ�
	printf("%c %d \n", a, &a);//a�� ���� a�� �ּҰ� ��µ�(char)
	printf("%lf %d \n", b, &b);//b�� ���� b�� �ּҰ� ��µ�(double)
	printf("%d %d \n", arr, &arr[0]); //arr�� ���� arr[0]�� �ּҰ� ��µ�
	printf("%d %d %d \n", pi, &pi, *pi);//pi�� �� i�� �ּ�, pi�� �ּ�, pi�� ������ i�� ��µ�
	printf("%d %d %c \n", pa, &pa, *pa);//pa�� �� a�� �ּ�, pa�� �ּ�, pa�� ������ a�� ��µ�
	printf("%d %d %lf \n", pb, &pb, *pb);//pb�� �� b�� �ּ�, pb�� �ּ�, pb�� ������ b�� ��µ�
	printf("%d %d %d \n", parr, &parr, *parr);//parr�� �� arr�� �ּ�, parr�� �ּ�, parr�� ������ �� arr�� ù��°�� ��µ�
	printf("%d %d %d %d \n", arr + 1, *(arr + 1), *arr + 3, ++*arr);
	//arr+1�� �ּҰ� array�� �ι�° ���� �ּҰ� ��µ�, arr+1�� ������ �ι�°�� ��µ�, arrù��° �������� 3�� ����, arrù��° ���� 1�� ����
}