#include<stdio.h>
int max (int a, int b, int c)
{	
	int max_sayi;
	if ( a>b ) 
	{
		if ( c>a )
		max_sayi =c;
		else
		max_sayi =a;
	}
	else
	{
		if ( c>b )
		max_sayi =c;
		else
		max_sayi =b;	
	}
	return max_sayi;	
}

int main()
{
	int x, y, z, enBuyuk;
	printf("uc sayi giriniz: ");
	scanf("%d%d%d", &x, &y, &z);
	
	enBuyuk = max (x, y, z);
	printf("en buyuk sayi = %d", enBuyuk);
}
