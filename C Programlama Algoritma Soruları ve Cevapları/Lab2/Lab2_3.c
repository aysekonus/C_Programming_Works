#include <stdio.h>

int main(void)
{
	int sayiA, sayiB, sayiC;
	
	printf("A ya bir de�er girin:");
	scanf("%d", &sayiA);
	
	printf("B ye bir de�er girin:");
	scanf("%d",&sayiB);
	
	if ((sayiA<5) || (sayiB>=10))
	   sayiC=sayiA+sayiB;
	   
	if (sayiA>=6)  
	    sayiC=sayiA*sayiB;
	    
	if (sayiB < 10) 
	 	sayiC=sayiA-sayiB;    
	   
	
	   
	printf("sayiC=%d",sayiC); 
	   
}
