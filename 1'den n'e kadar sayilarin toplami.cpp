#include<stdio.h>
int main() {
	
	int i,n,toplam=0;
	printf("sayi giriniz:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		toplam=toplam+i ;
	}
	
	printf("sonuc=%d",toplam);
	
	return 0;
}
