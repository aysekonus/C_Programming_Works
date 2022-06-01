//	Define a function that computes a^n where a and n are positive numbers. Do not use pow function.
#include<stdio.h>

int us_fonksiyon (int a, int n)
{
	int i,sonuc=1;
	if ( n== 1)
	return a;
	
	for (i=1; i<=n; i++){
		sonuc= sonuc*a;
	}
	
	return sonuc;
	
}

int main(){
	int a=3, n=4;
	int sonuc = us_fonksiyon (a,n);
	printf("sonuc = %d", sonuc);	
}
