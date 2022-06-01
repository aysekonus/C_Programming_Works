#include <stdio.h> 
#define MAX_SIZE 10 
 
void reel_decimal(float * numbers, int size, int * reel, float * decimal) 
{     
	int i;     
	for (i = 0; i < size; i++)     
	{         
		*(reel + i) = (int)*(numbers + i);         
		*(decimal + i) = *(numbers + i) - (int)*(numbers + i);     
 	} 
} 
 
int main() {     
	float numbers[MAX_SIZE];     
	int size, i;     
	int reel[MAX_SIZE];     
	float decimal[MAX_SIZE];       
	printf("Enter size of array: ");     
	scanf("%d", &size);       
	printf("Enter %d elements in array: ", size);     
	for (i = 0; i < size; i++)     
	{         
		scanf("%f", (numbers + i));     
	}     
	reel_decimal(numbers, size, reel, decimal);     
	for (i = 0; i < size; i++)
	{        
		printf("%d ", reel[i]);         
		printf("%f ", decimal[i]);         
		printf("\n");       
	}     
	return 0; 
}
