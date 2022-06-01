#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,y;
	printf("koordinat sisteminde bir x,y noktasi giriniz:");
	scanf("%d,%d",&x,&y);
	
	if(sqrt(x*x+y*y)<sqrt(5)) printf("nokta cemberin icindedir");
	else if(sqrt(x*x+y*y)>sqrt(5)) printf("nokta cemberin disindadir");
	else printf("nokta cemberin ustundedir");
	
	
	return 0;
}
