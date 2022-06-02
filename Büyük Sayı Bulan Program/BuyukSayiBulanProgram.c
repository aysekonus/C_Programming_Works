#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Buyuk Sayiyi Bulan Program*/

void BuyukSayi(int x, int y){
	if(x > y)
	{
		printf("%d",x);
	}
	else if(y>x)
	{
		printf("%d",y);
	}
	else
		printf("Sayilar esittir");
}

int main(int argc, char *argv[]) {
	
	int a,b;
	printf("1.Sayi: "); scanf("%d",&a);
	printf("2.Sayi: "); scanf("%d",&b);
	
	BuyukSayi(a,b);
	
	return 0;
}
