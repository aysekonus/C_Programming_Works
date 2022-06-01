#include <stdio.h>

// okunan iki sayýnýn  yerlerini deðiþtiren program

int main( )
{
	int x, y,temp;
	printf("x deðiþkeni için bir tamsayý giriniz:");
	scanf("%d",&x);
	printf("y deðiþkeni için bir tamsayý giriniz:");
	scanf("%d",&y);

	printf("sayýlarýn deðiþtirilmeden önceki  deðerleri:\n");
	printf("x=%d \t y=%d \n",x, y);
	
	temp = x;
	x=y;
	y = temp;	
	
	
	
	printf("sayýlarýn deðiþtirildikten sonraki  deðerleri:\n");
	printf("x=%d \t y=%d \n",x, y);


	
}

