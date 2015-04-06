/*****
* Homework 8
* Karen Nguyen
* 4/5/15
* CISP 360
*****/

#include <stdio.h>
void to_base_n(int x, int base);
int main(void)
{
	int num;
	int base;
	int i;

	printf("Enter a number or q to quit \n");
	while (scanf("%d", &num) ==1)
	{
		printf("Enter a base from 2 to 10 \n");
		while ((i = scanf("%d", &base)) ==1
			&& (base <2 || (base >10)))
		{
			printf("Enter a base between 2 and 10 \n");
		}
	
	printf("Base is %d", base);
	to_base_n(num, base);
	printf("Enter number or q to quit \n");
	}
	return 0;
}

void to_base_n(int x, int base)
{
	int remainder;
	remainder = x % base;
	
	if (x >= base)
	{
		x = x/base;
		to_base_n(x, base);
	}
	printf("%d", remainder);
	return;
}

