/* 2)Program�, s�f�r girilenceye kadar klavyeden girilen say�lar�n ortalamas�n� bulacak �ekilde d�zeltiniz.
 (say� olarak s�f�r girilince program say� giri�ini durduracak) */
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
 
