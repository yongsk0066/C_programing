// 2015111888 ��ǰ������а� ��뼮
// ���� 2��

#include <stdio.h>
int hanoi(int disc, int start, int target);
void printdisc(int disc, int start, int target);


int main(void)
{
	hanoi(3, 'A', 'C');
}

int hanoi(int disc, char from, char to)
{
	int temp;
	int start = from - 64;
	int target = to - 64;
	if (disc == 1)
		printdisc(disc, start, target);
	else {
		temp = 6 - start - target;
		hanoi(disc - 1, start + 64, temp + 64);
		printdisc(disc, start, target);
		hanoi(disc - 1, temp + 64, target + 64);
	}
}

void printdisc(int disc, int start, int target)
{

	printf("%c���� ���� %d�� %c�� �Ű���ϴ�.\n", start + 64, disc, target + 64);
}
