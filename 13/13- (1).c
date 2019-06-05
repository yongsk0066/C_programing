//2015111888식품생명공학과 장용석

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

	printf("한점의 좌표를 입력하세요\n");
	printf("x좌표 : ");
	scanf("%d", &a.x);
	printf("y좌표 : ");
	scanf("%d", &a.y);

	printf("또 다른점의 좌표를 입력하세요\n");
	printf("x좌표 : ");
	scanf("%d", &b.x);
	printf("y좌표 : ");
	scanf("%d", &b.y);

	printf("입력받은 두 점으로 구성된 직사각형의 넓이 : %d\n\n", abs(a.x - b.x)*abs(a.y - b.y));

	return 0;

}