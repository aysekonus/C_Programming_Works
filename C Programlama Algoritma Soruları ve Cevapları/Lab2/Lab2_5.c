#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	
	printf("Ucgen bulma programi\n");
	printf("1. aci:");
	scanf("%f",&a);
	printf("2. aci:");
	scanf("%f",&b);
	printf("3. aci:");
	scanf("%f",&c);
	
	if (a+b+c==180 && a!=0 && b!=0 && c!=0)
	{
		if(a==b && b==c)
			printf("Esit kenar ucgen");
		else if (a==b && b!=c || a==c && b!=c || b==c&&  a!=c )
			printf("Ikiz kenar ucgen");
		else
			printf("Cesit kenar ucgen");
		
	}
	
	else
		printf("Girdiginiz degerlerde bir ucgen mevcut degil");
			
	return 0;
}
