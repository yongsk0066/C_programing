//2015111888 식품생명공학과 장용석

#include <stdio.h>
void swap1(int x, int y);
void swap2(int *px, int *py);
int main(void)
{
	int a = 100, b = 200;
	printf("main 함수 : a=%d b=%d\n", a, b); //a = 100, b = 200 출력
	swap1(a, b); //swap1함수 x = 101 y = 201 출력
	printf("main 함수 : a=%d b=%d\n", a, b); //a,b의 값에는 변동 없이 그대로 a = 100, b = 200 출력
	swap2(&a, &b); //a, b주소에서 값을 수정함  x = 101 y = 201 출력
	printf("main 함수 : a=%d b=%d\n", a, b); //a,b값이 주소에서 수정되었음으로 a = 101 b = 201 이 출력됨
	return 0;
}
void swap1(int x, int y)
{
	x++;
	y++;
	printf("swap1함수 : x=%d y=%d\n", x, y);
}
void swap2(int *px, int *py)
{
	(*px)++;
	(*py)++;
	printf("swap2함수 : x=%d y=%d\n", *px, *py);}