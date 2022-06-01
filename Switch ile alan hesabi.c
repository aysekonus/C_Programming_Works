#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char karakter;
	int a,b,c ;
	int alan;
	
	printf("dikdortgen alani icin D, kare alani icin K harfini giriniz:");
	scanf("%c",&karakter);
	
	switch(karakter) {
		
		case 'D' :
			printf("dikdortgenin uzun ve kýsa kenarini giriniz:");
			scanf("%d %d",&b,&c);
			alan=b*c;
			printf("alan=%d",alan);
			break;
			
		case 'K' :
			printf("karenin kenarini giriniz:");
			scanf("%d",&a);
			alan=a*a;
			printf("alan=%d",alan);
			break;
		default :
			printf("hatali islem girisi");
			break;
	}
	
	return 0;
}
