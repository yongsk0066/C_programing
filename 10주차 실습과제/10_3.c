#include <stdio.h>

void add(int a[], int size) {
	for (int i = 0; i < size; i++) a[i]++; //각 행렬 값에 1씩 더해준다.
	for (int i = 0; i < size; i++) printf("%d ", a[i]); //출력 12345678910
}

int add2(int a) {
	a++; //b의 값에 1을 더해준다
	printf("%d\n", a); //출력 11
	return a; //함수 반환값->b의 값에 1을 더한 값
}

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) a[i] = i; //크기가 10인 배열에 0부터 9까지의 값을 넣어줌
	for (int i = 0; i < 10; i++) printf("%d ", a[i]);//배열 a 출력 0123456789
	printf("\n");
	add(a, 10); //배열 크기와 함께 행렬 a의 주소값을 전달
	printf("\n");
	for (int i = 0; i < 10; i++) printf("%d ", a[i]); //배열 a 출력 12345678910
	//함수의 인자로 배열 이름(주소값)을 주었기 때문에 원본의 값이 변한 것을 알 수 있다.
	printf("\n");

	int b = 10;
	printf("%d\n", b); //b출력 10
	int c = add2(b); //add2(b)의 반환값을 c에 대입한다.
	printf("%d\n", b); //add2의 인자에 b의 값을 전달했기 때문에 b의 원본 값은 변하지 않는 것을 볼 수 있다.
	printf("%d\n", c); //반환값 a를 돌려받은 c의 값은 11인 것을 볼 수 있다.

	return 0;
}