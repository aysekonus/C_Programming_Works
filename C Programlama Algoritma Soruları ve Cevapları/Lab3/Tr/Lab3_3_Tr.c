/* 3)program�, s�f�r girilinceye kadar  klavyeden girilen Pozitif say�lar�n ortalamas�n�  bulacak �ekilde d�zeltiniz.
(negatif say�lar ortalamaya kat�lmayacak).*/
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

