/* 3)	Write a C function that computes the number of negative numbers, positive numbers and zeros 
in an integer array with size 10. */
#include <stdio.h>
#define MAX_SIZE 10 

void neg_num(int *numbers, int *neg_count, int *pos_count, int *zero_count) 
{           
	*neg_count = 0;     
	*pos_count = 0;     
	*zero_count = 0; 
	      int i;
	for ( i = 0 ; i < 10 ; i++)
	{         
		if(*(numbers + i)  == 0)             
		(*zero_count)++;         
		if(*(numbers + i)  < 0)             
		(*neg_count)++;         
		if(*(numbers + i)  > 0)             
		(*pos_count)++;       
	} 
} 
int main() 
{     
	int arr[MAX_SIZE], size, i;     
	int neg_count, pos_count, zero_count;  
	         
	printf("Enter 10 elements in array: ");     
	for (i = 0; i < 10; i++)     
	{         
		scanf("%d", (arr + i));     
	}     
	neg_num(arr, &neg_count, &pos_count, &zero_count);     
	printf("Negative count in array: %d\n", neg_count);     
	printf("Positive count in array: %d\n", pos_count);     
	printf("Zero count in array: %d\n", zero_count);     
	return 0; 
}
