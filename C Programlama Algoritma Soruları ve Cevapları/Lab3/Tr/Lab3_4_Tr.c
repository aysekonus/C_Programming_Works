//4)Girilen n sayýsýnýn faktöriyelini hesaplayan C pogramýný  yazýnýz.
#include<stdio.h>
int main(){
	int faktoriyel=1,n;
	printf("faktoriyelinin hesaplanmasinin istediðiniz sayiyi giriniz: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		faktoriyel*=i;
	}
	printf("faktoriyel degeri=%d",faktoriyel);
	return(0);
}
