/* 3)programý, sýfýr girilinceye kadar  klavyeden girilen Pozitif sayýlarýn ortalamasýný  bulacak þekilde düzeltiniz.
(negatif sayýlar ortalamaya katýlmayacak).*/
#include<stdio.h>
int main(){
	float ortalama,sayi,adet=0,toplam=0;
		printf("bir sayi giriniz:");
		scanf("%f",&sayi);
	while(sayi!=0)
	{
		if(sayi>0){
		toplam+=sayi;
		adet++;	
		}
	printf("\ntekrar bir sayi giriniz:");
	scanf("%f",&sayi);
	}
	ortalama=toplam/adet;
	printf("sayilarin ortalamasi= %f",ortalama);
	return(0);
}

