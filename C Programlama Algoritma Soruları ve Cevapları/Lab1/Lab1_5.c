#include <stdio.h>

// okunan iki say�n�n  yerlerini de�i�tiren program

int main( )
{
	int x, y,temp;
	printf("x de�i�keni i�in bir tamsay� giriniz:");
	scanf("%d",&x);
	printf("y de�i�keni i�in bir tamsay� giriniz:");
	scanf("%d",&y);

	printf("say�lar�n de�i�tirilmeden �nceki  de�erleri:\n");
	printf("x=%d \t y=%d \n",x, y);
	
	temp = x;
	x=y;
	y = temp;	
	
	
	
	printf("say�lar�n de�i�tirildikten sonraki  de�erleri:\n");
	printf("x=%d \t y=%d \n",x, y);


	
}

