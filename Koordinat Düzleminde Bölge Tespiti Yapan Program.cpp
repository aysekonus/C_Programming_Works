#include<stdio.h>
#include<math.h>
int main() {
	
	int x,y;
	printf("koordinat duzlemi icin x,y olarak bir nokta giriniz:");
	scanf("%d , %d",&x,&y);
	
	if (x>0 && y>0) printf("1.BOLGE");
	else if (x<0 && y>0) printf("2.BOLGE");
	else if (x<0 && y<0) printf("3.BOLGE");
	else if (x>0 && y<0) printf("4.BOLGE");
	else printf("baslangic noktasidir.");
	
	
	
	return 0;
}
