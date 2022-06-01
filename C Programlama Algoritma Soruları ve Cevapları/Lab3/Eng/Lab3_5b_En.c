#include<stdio.h>
int main(void)
{
	int number,i=1,fact=1,temp;
	
	while(true)
	{
		printf("Enter the number: ");
		scanf("%d",&number);
		temp=number;
		if(number>=0)
		{
			while(number>0)
			{
				fact*=i;
				i++;
				number--;
			}
				
			printf("%d! = %d",temp,fact);
			
			break;
		}
		
		else
			printf("Error: Number is negative.\nPlease, enter the positive number.\n");
	}
	
	return 0;
}
