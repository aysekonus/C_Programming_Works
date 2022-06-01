#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* a kare + b kare = ckare , n den küçük veya eþit olup iþlemi saðlayan a b c leri bulan program */

int main(int argc, char *argv[]) {
	
	int a, b, c, n;
	printf("enter the n\n");
	scanf("%d", &n);
	
	for(a=1; a<=n; a++) {
		for(b=1; b<=n; b++) {
			for(c=1; c<=n; c++)
		if((a * a + b * b) == (c * c))
		printf("%d - %d - %d\n", a, b, c);
		
		}
		
	}
	
	
	
	
	
	
	return 0;
}
