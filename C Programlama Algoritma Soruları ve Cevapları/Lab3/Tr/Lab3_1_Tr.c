//1) Girilen 10 tane say�n�n ortalamas�n� bulan C program�n� yaz�n�z.
#include<stdio.h>
int main(){
	float ortalama,sayi,toplam=0;
	int i=1;
	while(i<=10)
	{
		printf("\n %d. sayiyi giriniz:",i);
		scanf("%f",&sayi);
		toplam+=sayi;
		i++;
		
	}
	ortalama=toplam/(i-1);
	
	printf("toplam=%f,sayilarin ortalamasi= %f",toplam,ortalama);
	return(0);
}
