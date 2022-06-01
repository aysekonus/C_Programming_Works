#include <stdio.h> 
int main(void) 
{ 
int a[10] = {100, -250, 400, 125 ,550, 900, 689, 450, 347, 700}; 
int k, eb; 
// ilk eleman en büyük kabul ediliyor  
eb = a[0]; 
for(k=1; k<10; k++) 
	if( a[k]>eb ) 
		eb = a[k]; 

printf("En buyuk eleman = %d\n",eb); 
return 0; 
}

