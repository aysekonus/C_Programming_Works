#include<stdio.h>
int main(void)
{
	int number,i,fact=1,temp;
	
	for(;;)
	{
		printf("Enter the number: ");
		scanf("%d",&number);
		temp=number;
		if(number>=0)
		{
			for(i=1;i<=number;i++)
				fact*=i;
				
			printf("%d! = %d",temp,fact);
			
			break;
		}
		
		else
			printf("Error: Number is negative.\nPlease, enter the positive number.\n");
	}
	
	return 0;
}
