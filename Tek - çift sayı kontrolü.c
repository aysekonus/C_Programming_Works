#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("bir sayi giriniz:", x);
	scanf("%d", &x);
	
	if (x % 2 == 1) {
		printf("x tek sayidir", x);
	}
	 else {
	 	printf("x cift sayidir", x);
	 }
	
	
	
	
	return 0;
}
