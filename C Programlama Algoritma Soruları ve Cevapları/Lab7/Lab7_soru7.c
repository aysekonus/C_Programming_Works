// 6)Sort the elements of an array of size 10.
#include<stdio.h>

int sirala ( int A[])
{
	int i, j, temp;
	
	for( i=0; i<10; i++) 
	{
		for ( j=i+1; j<10; j++) 
		{
			if( A[i] > A[j] )
			{
					temp = A[i];
					A[i] = A[j];
					A[j] = temp;
			}
		}
	}
	
	return A[10];
}

int main ()
{
	int B[10]={1, 12, 45, 54, 14, 56, 23, 87, 21, 17};

	B[10] = sirala(B);
	
	printf("Dizinin siralanmis hali: \n");
	for ( int i=0; i<10; i++)
	{
		printf("%d ", B[i]);
	}	
}
