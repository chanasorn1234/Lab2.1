#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x,a;
	printf("Enter Number: ");
	scanf("%d", &x);


	while (x % 2 == 0)
	{
		x = x / 2;
		printf("2x");
		
	}
	while (x % 5 == 0)
	{
		x = x / 5;
		printf("5x");
	}
	
	while (x % 3 == 0)
	{
		x = x / 3;
		printf("3x");

	}
	
	if (x % 2 != 0 & x % 3 != 0 & x % 5 != 0)
	{
		printf("%d", x);
	}






	return 0;
}