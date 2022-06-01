#include<stdio.h>
#include<stdlib.h>
int faktoriyel ( int i )
{
	int fakt=1;
	while (i>1)
	{
	fakt = fakt *i;
	i--;		
	}
	return fakt;
}
int kombinasyon ( int n, int r )
{
	int komb = ( faktoriyel(n)) / ( faktoriyel(n-r) * faktoriyel(r));
	return komb;
}
int main (){
	int n, r;
	int sonuc;
	printf("n sayisi giriniz: ");
	scanf("%d", &n);
	printf("r sayisi giriniz: ");
	scanf("%d", &r);
	
	sonuc = kombinasyon( n, r);
	printf("sonuc = %d ", sonuc);
	
	return 0;
}
