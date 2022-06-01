#include <stdio.h>
#include <math.h>

int main()
{
	float x;
	
	printf("x:");
	scanf("%f",&x);
	
	if (x<=0)
		printf("Cevap: 0");
		
	else if (0<x && x<=8)
		printf("Cevap: %f",2/(sqrt(x*x*x*x*x+4)));
	
	else
		printf("Cevap: %d",sin(x)+x*x*x);
		
	return 0;
	
}
