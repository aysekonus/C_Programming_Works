#include <stdio.h>

int main() {
	
	int n;
	int fact = 1;
	
	printf ("faktoriyelinin alinmasini istedigin sayiyi gir:");
	scanf("%d", &n);
	
	while (n != 0) {
		
		fact = fact * n;
		--n;
		
	}
	
	printf("sonuc = %d" ,fact);
	
	
	
	
	
	
	
	
	return 0;
}
