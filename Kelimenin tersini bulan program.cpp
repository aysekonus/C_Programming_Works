#include <stdio.h> 
#include <stdlib.h> 
#include<string.h>

int main()
{
	
	char A[100]; 
	int k,uzunluk; 
	puts("ifadenizi giriniz\n"); 
	gets(A); 
	uzunluk=strlen(A); 

	for(k=uzunluk-1;k>=0;k--) 
		putchar(A[k]); 

	putchar('\n');	
	
return 0;
}

