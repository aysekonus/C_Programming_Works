#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionsort(int dizi[10],int boyut=10)
{
	int i,j,eleman;
	
	for(i=1;i<boyut;i++)
	{
		eleman=dizi[i];
		j=i-1;
		
		while(j>=0 && dizi[j]>eleman)
		{
			dizi[j+1]=dizi[j];
			j--;
			
		}
		dizi[j+1]=eleman;	
	}
}


int main() {
	
	int i,boyut=10,dizi[10];
	
	srand(time(NULL));
	printf("Dizinin elemanlari: ");
	for(i=0;i<boyut;i++)
	{
		dizi[i]=rand()%10+1;
		printf("%d ",dizi[i]);
	}
	
	insertionsort(dizi,boyut);
	printf("\nDizinin sirali hali: ");
	for(i=0;i<boyut;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	
	return 0;
}









