#include<stdio.h>

void swap (int *a, int *b)
{
	int gecici;
	gecici = *a;
	*a = *b;
	*b = gecici;
}

int main ()
{
	int x=5, y=10;
	printf("fonksiyondan once degerler: x= %d ve y= %d\n", x, y);
	swap(&x, &y);
	printf("fonksiyondan sonra degerler: x= %d ve y= %d", x, y);

	return 0;
}
