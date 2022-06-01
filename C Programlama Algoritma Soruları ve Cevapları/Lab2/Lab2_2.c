#include <stdio.h>

int main(void)
{
	int sayi;
	printf("Bir tam sayi giriniz");
	scanf("%d",&sayi);
	if (sayi<0)
	{
		printf("Negatif bir sayi girdiniz\n");
		printf("Tekrar bir tam sayi giriniz\n");
		scanf("%d",&sayi);
	}
	
	else if (sayi>=0 && sayi<=25 )
	   printf("Doðru bir sayi\n");
	   
	else
	   sayi=sayi%25;
	   
	
	printf("Bu program girilen pozitif tamsayiyi 0-25 aralýgýna cevirmektedir\n");
	printf("Programin dogru calismasýn da sayi 0-25 araliginda olmali\n");
	printf("sayi=%d",sayi); 
	   
}
