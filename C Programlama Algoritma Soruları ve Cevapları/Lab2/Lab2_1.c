#include <stdio.h>
# define ORAN 1.609344
int main()
{
	char sec;
	float mesafe, sonuc;
	printf(" Mil icin (m) Km içim (k) tuþuna basýnýz");
	scanf("%c",&sec);
	printf("Mesafeyi giriniz");
	scanf("%f",&mesafe);
	if (sec ='m')
	  	sonuc = mesafe * ORAN;
	else
		sonuc=mesafe/ORAN;	  	    
    printf(" Sonuc =%f %c",sonuc,sec=='m'?"KM":"Mil");	 
	 
 }
