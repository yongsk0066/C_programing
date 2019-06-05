//2015111888 식품생명공학과 장용석

#include <stdio.h>


struct price
{
	int large;
	int regular;
};
struct menu
{
	char *drinks;
	double kcal;
	struct price won;
};
typedef struct menu menu;

void print_menu(menu *coffee);



int main(void)
{
	menu coffee[5] = 
	{
		{"에스프레소", 25.30, 3800, 4300},
		{"아메리카노", 20.10, 4300, 4800},
		{"카푸치노", 124.90, 4500, 5000},
		{"바닐라 라떼", 201.50, 4600, 5100},
		{"카라멜 마키아토", 300.00, 4800, 5300},
	};
	struct menu *p;
	//printf("%s", p[1]->drinks);
	print_menu(&coffee);
}


void print_menu(menu *coffee)
{
	int i = 0;


	printf("******************CAFFEE on the plan******************\n");
	printf("            menu         kcal      large      regular\n");
	printf("------------------------------------------------------\n");
	for (i; i < 5; i++)
	{
		
		printf("        %-18s%-10.2f%-10d%-7d\n", coffee[i].drinks, coffee[i].kcal, coffee[i].won.large, coffee[i].won.regular);
	}
	printf("------------------------------------------------------\n");

}