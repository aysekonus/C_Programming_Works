#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shellsort(int dizi[10],int boyut=10)
{

int i,j,k,artis=3;

for(i=boyut/2;i>0;i/=2)
{
	for(j=i;j<boyut;j++)
	{
		for(k=j-i;k>=0;k=k-i)
		{
			if(dizi[k+i]>=dizi[k])
			{
				break;
			}
			else
			{
				int temp = dizi[k];
				dizi[k]=dizi[k+i];
				dizi[k+i]=temp;
			}
		}
	}
}

}


int main() {
	
	int i,boyut=10,dizi[10];
	srand(time(NULL));
	printf("dizinin elemanlari: ");
	for(i=0;i<boyut;i++)
	{
		dizi[i]=rand()%10+1;
		printf("%d ",dizi[i]);
	}
	
	shellsort(dizi,boyut);
	printf("\nDizinin sirali hali: ");
	for(i=0;i<boyut;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	
	
	return 0;
}
