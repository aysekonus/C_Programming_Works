//4)Girilen n sayısının faktöriyelini hesaplayan C pogramını  yazınız.
#include<stdio.h>
int main(){
	int faktoriyel=1,n;
	printf("faktoriyelinin hesaplanmasinin istediğiniz sayiyi giriniz: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		faktoriyel*=i;
	}
	printf("faktoriyel degeri=%d",faktoriyel);
	return(0);
}
