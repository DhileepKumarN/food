#include<stdio.h>
int main()
{
	int a;
	printf("pick an item : \n1.burger\n2.french fries\n3.pasta\n4.pizza\n5.sandwich\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("food item - burger\nprice-129");
		break;
		case 2:printf("food item - french fries\nprice-99");
		break;
		case 3:printf("food item - pasta\nprice-179");
		break;
		case 4:printf("food item - pizza\nprice-239");
		break;
		case 5:printf("food item - sandwich\nprice-149");
		break;
		default:printf("invalid choice");
	}
}
