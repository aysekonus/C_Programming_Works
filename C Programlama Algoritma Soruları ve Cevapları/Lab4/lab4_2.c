#include <stdio.h>
#include <math.h>
// pow (taban,üst)

int main ()
{
	int n,sayac;
	float x,seri;
	
	printf("Bir pozitif sayi giriniz:");
	scanf("%d",&n);
	printf("Bir real sayi giriniz:");
	scanf("%f",&x);
	
	for (sayac = 1; sayac<=n; sayac++)
	{
		seri =seri + (2*sayac-1)/(pow(x,2*sayac));
	}
	
	printf ("seri=%f",seri);
	
	return (0);
	
}
