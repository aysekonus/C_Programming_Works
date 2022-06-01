#include <stdio.h>
int main()
{
	int i,k=0,j=0,A[20],B[20],C[20];
	
	for (i=0;i<20;i++)
	{
		printf("Dizinin %d. elemanini giriniz:",i+1);
		scanf("%d",&A[i]);	
		
		if(A[i]%2==1)
		{
			B[k]=A[i];
			k++;
		}
		else
		{
			C[j]=A[i];
			j++;
		}
		
		
	}
	
	for(i=0;i<k;i++)
	{
		printf("%d\n",B[i]);
	}
	
	for(i=0;i<j;i++)
	{
		printf("%d\n",C[i]);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
