#include <stdio.h>

int main()
{
	int sayi;
	int hane_birler, hane_onlar, hane_yuzler, hane_binler;
	printf("Positif bir sayi giriniz:");
	scanf("%d",&sayi);
	hane_birler=sayi%10/1;
	hane_onlar=sayi%100/10;
	hane_yuzler=sayi%1000/100;
	hane_binler=sayi%10000/1000;
	printf("Birler basamagi: %d \n", hane_birler);
	printf("Onlar basamagi: %d \n", hane_onlar);
    printf("Yuzler basamagi: %d \n", hane_yuzler);
	printf("Binler basamgi: %d \n",hane_binler); 
	
	return(0);
}
