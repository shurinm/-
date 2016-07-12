#include <stdio.h>
#include <stdlib.h>
#include "./header/cacl.h"

void print_menu()
{
	printf("Enter operation:\n\n");
	printf("1. Sum (+)\n");
	printf("2. Sub (-)\n");
	printf("3. Mul (*)\n");
	printf("4. Div (/)\n");
	printf("0. Exit\n");
}

void get_operands(int *i1, int *i2)
{
	printf("Enter first opernd: ");
	scanf("%d", i1);
	printf("Enter second opernd: ");
	scanf("%d", i2);
}

int main()
{
	int select = -1;
	int i1, i2;
	int rezult;

	while (select != 0)
	{
		print_menu();
		scanf("%d", &select);
		get_operands(&i1, &i2);
		switch(select)
		{
			case 1: 
				rezult = sum(i1, i2);
				break;
			case 2: 
				rezult = sub(i1, i2);
				break;
			case 3: 
				rezult = mul(i1, i2);
				break;
			case 4: 
				rezult = divi(i1, i2);
				break;
			case 0:
				exit(1);
		}
			system("clear");
		printf("Rezult last: %d\n\n", rezult);
	}

}