#include<stdio.h>
int main(void)
{
	int number,digits=0;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	while(number != 0)
	{
		number = number/10;
		digits++;	
	}
	
	printf("Total digits in the number is %d \n",digits);
	
	return 0;
}
