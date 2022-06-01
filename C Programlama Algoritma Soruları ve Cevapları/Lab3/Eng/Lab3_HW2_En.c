#include <stdio.h>

int main()
{
	int number, i;
	int is_prime = 1; //Assuming that the number is prime at the begining
	
	printf("Enter an integer number: ");
	scanf("%d", &number);
	
	for(i=2; i<number; i++){
		if(number%i==0){
			is_prime = 0;
			break;
		}	
	}
	
	if(is_prime == 1)
		printf("The number is prime.\n");
	else
		printf("The number is not prime.\n");
  
    return 0;
}
