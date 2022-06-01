#include<stdio.h>
int main(void)
{
	int number,temp,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	temp=number;
	while(number > 0)
	{
		sum += number%10;
		number/=10;
	}
	
	printf("Sum of the digits %d = %d\n",temp,sum);
	
	return 0;
}
