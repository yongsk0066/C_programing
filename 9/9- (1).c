// 2015111888 식품생명공학과 장용석
// 문제 1번
#include <stdio.h>

int num = 0;
void check(void);
int main()
{
	int num = 1;              
	{
		int num = 2;
		printf("%d\n", num);      //10번 줄에서 넣어준 num = 2가 출력됨
	}
	check();   //전역변수로 선언된 num의 값 0이 출력됨
	printf("%d\n", num); //8번 줄에서 넣어준 1이 출력됨
}
void check(void) {
	printf("%d\n", num); 
}