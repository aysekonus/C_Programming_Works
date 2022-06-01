/* 2)Programý, sýfýr girilenceye kadar klavyeden girilen sayýlarýn ortalamasýný bulacak þekilde düzeltiniz.
 (sayý olarak sýfýr girilince program sayý giriþini durduracak) */
#include<stdio.h>
int main(){
	float ortalama,sayi,adet=0,toplam=0;
		printf("bir sayi giriniz:");
		scanf("%f",&sayi);
	while(sayi!=0)
	{
		toplam+=sayi;
		printf("\ntekrar bir sayi giriniz:");
		scanf("%f",&sayi);
		adet++;	
	}
	ortalama=toplam/adet;
	printf("sayilarin ortalamasi= %f",ortalama);
	return(0);
}
 
