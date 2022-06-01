#include <stdio.h>
int main()
{	
	int n,i=0,j=0,k=0;
	int A[100];
	int Cift[100],Tek[100];
	
	//dizi okuma
	printf("n sayisini giriniz:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Dizinin %d elemanini giriniz:",i+1);
		scanf("%d",&A[i]);
		
		if (A[i]%2==1)
		{		
			Tek[k]=A[i];
			k++;
		}		
			
		else
		{
			Cift[j]=A[i];
			j++;
		}
	
	}
	
	for (i=0;i<k;i++)
	{
		printf("%d ",Tek[i]);
	}
	
	for (i=0;i<j;i++)
	{
		printf("\n%d ",Cift[i]);
	}
	
	
		
	return 0;
}
