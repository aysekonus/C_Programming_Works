#include <stdio.h>;

int main(void)
{
	float pi=3.14;
	float cevre, alan;
	float r;
	printf("yari cap=");
	scanf("%f",&r);
	cevre=2*pi*r;
	// float formatı aksi belirtilmedikçe .'dan sonra 6 basamak duyarlıklı yazar
	printf("cevre=%f\n",cevre);
	alan=pi*r*r;
	printf("alan=%f\n",alan);
	return(0);
}

