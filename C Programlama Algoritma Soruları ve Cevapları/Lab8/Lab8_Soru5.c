// 5)	Write your strlen() function which computes the length of a string.
#include<stdio.h>

int kar_sayisi (char dizi[] )
{
	int i,sayi=0;
	for (i =0; dizi[i]!= '\0'; i++)
	sayi++;
	
	return sayi;
}

int main(){
	char cumle[] = "merhaba nasilsiniz";
	printf("dizinin karakter sayisi= %d ", kar_sayisi(cumle));
}
