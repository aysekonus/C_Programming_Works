#include<stdio.h>
int main(){
	int A[3][4]={ {3,11,-6,-8},{-4,4,89,5},{2,4,8,9} };
	int i,j;
	for( i=0; i<3; i++)
	{
		int enk=A[i][0];
		for(j=0; j<4; j++)
		{
			if(A[i][j]<enk)
			enk=A[i][j];	
		}
		printf("%d. satirinin en kucuk elemani=%d\n",i+1, enk);
	}
	
	for(i=0; i<4; i++)
	{
		int enb=A[0][i];
		for(j=0; j<3; j++)
		{
			if(A[j][i]>enb)
			enb=A[j][i];
		}
	printf("%d. sutunun en buyuk elemani= %d\n", i+1, enb);
	}
	
	// matrisin en buyuk elemani
	int max=A[0][0];
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
		if(A[i][j]>max)
		max=A[i][j];	
		}
	}
	printf("matrisin en buyuk elemani= %d\n", max);
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
