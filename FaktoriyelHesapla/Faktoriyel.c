#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen sayý kadar (N) sayýnýn faktoryelini alan program */

int main(int argc, char *argv[]) {
	
	int i,N,faktoriyel;
	printf("Tam sayi giriniz: "); scanf("%d",&N);
	
	for(i=N; i>0; i--){
		
		faktoriyel *= i;
		
	}
	printf("%d",faktoriyel);
	return 0;
}
