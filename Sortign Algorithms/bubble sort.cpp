#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubblesort(int dizi[10],int boyut=10) 
{
	int i,j;
	
	for(i=0;i<boyut;i++)
	{
		for(j=1;j<boyut-i;j++)
		{
			if(dizi[j-1]>dizi[j])
			{
				int temp = dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=temp;
			}
		}
	}

}

int main() {
	
	int boyut=10,dizi[10];
	int i;
	
	srand(time(NULL));
	printf("dizinin elemanlari: ");
	for(i=0;i<boyut;i++) 
	{
		dizi[i]=rand()%10+1;
		printf("%d ",dizi[i]);
	}
	
	bubblesort(dizi,boyut);
	printf("\ndizinin sirali hali: ",dizi[i]);
	for(i=0;i<boyut;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	
	
	
	return 0;
}


