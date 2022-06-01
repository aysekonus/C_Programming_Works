#include <stdio.h>

int main()
{
	int number, min, max, count = 0, sum = 0;
	float avg;
	
	printf("Enter an integer number: ");
	scanf("%d", &number);
	
	if(number!=0){
		min = number;
		max = number;
		count = 1;
		sum = number;
	}
	else{
		printf("You have not entered a value except 0 !\n");
		return 0; //Terminating the program...
	}
	
	while(number!=0)	
	{
		printf("Enter an integer number: ");
		scanf("%d", &number);
		
		if(number==0)
			break;
			
		if(number<min)
			min = number;
			
		if(number>max)
			max = number;
			
		sum += number;		
		count++;	
	}
	
	avg = (float(sum)/float(count));
  	printf("The minimum value is %d.\n", min);
	printf("The maximum value is %d.\n", max);	
	printf("The average is %f.\n", avg);
  
    return 0;
}
