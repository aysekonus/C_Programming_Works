// 2)	Write a C function that computes the number of negative numbers in an integer array with size 10.
#include<stdio.h>

void neg_num (int *arr, int *neg, int *poz, int *zero)
{
	int *neg=0, *poz=0, *zero=0;
	for (int i=0 ; i<10 ; i++)
	{
		if (*(arr+i) <0)
		*neg++;	
	}
}

int main()
{
	int A[10]={1, -1, 3, 5, -6, -7, 9, -10, 11, -23};
	int num = neg_num (A);
	printf("neg eleman sayisi= %d", num);
	
	return 0;
}
