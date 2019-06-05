//2015111888 식품생명공학과 장용석


#include <stdio.h>
void add(int a[], int size) {
	for (int i = 0; i < size; i++) a[i]++;
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
}
int add2(int a) {
	a++;
	printf("%d\n", a);
	return a;
}
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) a[i] = i;
	for (int i = 0; i < 10; i++) printf("%d ", a[i]); // a[10] = {0, 1, 2, 3 ,4, 5, 6, 7, 8 ,9} 가 출력됨
	printf("\n");
	add(a, 10);  //함수 add가 실행되어 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 이 출력됨
	printf("\n");
	for (int i = 0; i < 10; i++) printf("%d ", a[i]); // 배열은 원형이들어감으로 바뀐 값 그대로  1, 2, 3, 4, 5, 6, 7, 8, 9, 10 이 출력됨
	printf("\n");
	int b = 10; //중간에 선언해도 되나요?
	printf("%d\n", b); // b = 10, 10이 출력됨
	int c = add2(b); //add2에서 10++값인 11이 출력됨 그리고 c가 11로 초기화됨
	printf("%d\n", b); //b가 그대로 10이 출력됨
	printf("%d\n", c); //c=11이므로 11이 출력됨
	return 0;
}