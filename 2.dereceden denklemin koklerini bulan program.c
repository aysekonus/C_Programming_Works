#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, Det;
	float x1, x2;
	
	printf("a katsayisini gir:");
	scanf("%d", &a);
	printf("b katsayisini gir:");
	scanf("%d", &b);
	printf("c katsayisini gir:");
	scanf("%d", &c);
	
	Det = (b*b) - (4*a*c);
	
	if (Det > 0) {
		x1 = ( -b - sqrt(Det)) / (2*a) ;
		x2 = ( -b + sqrt(Det)) / (2*a) ;
		
		printf("x1 = %1.f\n", x1);
		printf("x2 = %1.f", x2);
	}
		else if (Det == 0) {
			
			x1 = x2 = ( -b ) / (2*a) ;
			printf("kokler esit ve %1.f'dir'", x1);
			
		}
	
		else {
			
			printf("reel kok yoktur");
		}
	
	return 0;
}
