//4)Girilen n say�s�n�n fakt�riyelini hesaplayan C pogram�n�  yaz�n�z.
#include<stdio.h>
int main(){
	int faktoriyel=1,n;
	printf("faktoriyelinin hesaplanmasinin istedi�iniz sayiyi giriniz: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		faktoriyel*=i;
	}
	printf("faktoriyel degeri=%d",faktoriyel);
	return(0);
}
