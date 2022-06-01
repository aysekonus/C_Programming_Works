#include<stdio.h>
#include<math.h>
int main(){
	float x, A[10][5];
	int i,j;
	printf("x degerini giriniz: ");
	scanf("%f", &x);
	//matrisin hesaplanmasý
	for (i=0; i<10; i++)
	{
		int us = -1;
		for (j=0; j<5; j++)
		{
			A[i][j] = pow((x + 0.1*i),us);
			us++;
		}
	}
	//matrisin yazýlmasý
	for (i=0; i<10; i++)
	{
		for ( j=0; j<5; j++)
		{
			printf("%f  ",A[i][j]);
		}
	printf("\n");
	}	
}
