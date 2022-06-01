#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void selectionsort(int dizi[10],int boyut=10)
{
	int i,j,minindex;
	for(i=0;i<boyut;i++)
	{
		minindex=i;
		
		for(j=i;j<boyut;j++)
		{
			if(dizi[j]<dizi[minindex])
			{
				minindex=j;
			}
		}
		
		int temp=dizi[i];
		dizi[i]=dizi[minindex];
		dizi[minindex]=temp;
	}

}


int main() {
	
	int i,dizi[10],boyut=10;
	srand(time(NULL));
	printf("Dizinin elemanlari: ");
	for(i=0;i<boyut;i++)
	{
		dizi[i]=rand()%10+1;
		printf("%d ",dizi[i]);
	}
	
	selectionsort(dizi,boyut);
	printf("\ndizinin siralanmis hali: ");
	for(i=0;i<boyut;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
