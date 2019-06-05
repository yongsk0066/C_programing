//2015111888 식품생명공학과 장용석


#include <stdio.h>
int main() {
	int i = 3, *pi;
	char a = 'A', *pa;
	double b = 3.1, *pb;
	int arr[5] = { 5,10,15,20,25 }, *parr;
	pi = &i; //i의 주소가 들어감
	pa = &a; //a의 주소가 들어감
	pb = &b; //b의 주소가 들어감
	parr = arr; //arr 의 주소가 들어감
	printf("%d %d \n", i, &i); //i의 값과 i의 주소가 출력됨
	printf("%c %d \n", a, &a);//a의 값과 a의 주소가 출력됨(char)
	printf("%lf %d \n", b, &b);//b의 값과 b의 주소가 출력됨(double)
	printf("%d %d \n", arr, &arr[0]); //arr의 값과 arr[0]의 주소가 출력됨
	printf("%d %d %d \n", pi, &pi, *pi);//pi에 들어간 i의 주소, pi의 주소, pi의 참조값 i가 출력됨
	printf("%d %d %c \n", pa, &pa, *pa);//pa에 들어간 a의 주소, pa의 주소, pa의 참조값 a가 출력됨
	printf("%d %d %lf \n", pb, &pb, *pb);//pb에 들어간 b의 주소, pb의 주소, pb의 참조값 b가 출력됨
	printf("%d %d %d \n", parr, &parr, *parr);//parr에 들어간 arr의 주소, parr의 주소, parr의 참조값 즉 arr의 첫번째가 출력됨
	printf("%d %d %d %d \n", arr + 1, *(arr + 1), *arr + 3, ++*arr);
	//arr+1의 주소값 array의 두번째 값의 주소가 출력됨, arr+1의 참조값 두번째가 출력됨, arr첫번째 참조값에 3을 더함, arr첫번째 값에 1을 더함
}