#include <stdio.h>
#include <math.h>
// pow (taban,üst)

int main ()
{
	int n,sayac;
	float x,seri;
	char ch='e';
	
	
		
	while (ch == 'e' || ch == 'E')
	{
		printf("Bir pozitif sayi giriniz:");
		scanf("%d",&n);
		printf("Bir real sayi giriniz:");
		scanf("%f",&x);
		
			for (sayac = 1; sayac<=n; sayac++)
			{
				seri += (2*sayac-1)/(pow(x,2*sayac));
			}
			printf ("seri=%f",seri);
			seri=0;
				printf("\ndevam edecek misin:");
				scanf(" %c", &ch);	
		
	}
	return (0);
	
}
