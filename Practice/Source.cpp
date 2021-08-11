#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("Sum : ");
	printf("%d\n", c);
	c = a - b;
	printf("Difference : ");
	printf("%d\n", c);
	c = a * b;
	printf("Product : ");
	printf("%d\n", c);
	c = a / b;
	printf("Quotient : ");
	printf("%d", c);
	return 0;
}