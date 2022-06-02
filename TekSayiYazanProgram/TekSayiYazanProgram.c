#include <stdio.h>
#include <stdlib.h>

/* 1’den 100’e kadar tek sayýlarý yazdýran algoritma ve akýþ diyagramýný yapýnýz. */

int main(int argc, char *argv[]) {
	
	int i;
	for(i=0; i<=100; i++){
		if(i % 2 != 0 ){
			printf("%d\t",i);
		}
	}
	
	return 0;
}
