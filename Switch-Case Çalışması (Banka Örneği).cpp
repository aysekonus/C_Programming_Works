#include <stdio.h>
 int main() {
 	
 	int islem;
 	int bakiye = 1850;
 	int tutar;
 	
 	printf("islemler:\n1-para yatirma\n2-para cekme\n3-havale yapma\n4-bakiye sorgulama\n5-Kart Iade\n");
 	printf("yapilacak islemi giriniz:");
 	scanf("%d", &islem);
 	
 	switch (islem) {
 		
 		case 1:
 			printf("bakiyeniz: %d\n", bakiye);
 			printf("yatirilacak tutari giriniz:");
 			scanf("%d", &tutar);
 			
 			bakiye += tutar ;
 			printf("yeni bakiye: %d\n", bakiye);
 			break;
 			
			 			
 		case 2:
 			printf("bakiyeniz: %d\n", bakiye);
 			printf("hesaptan cekilecek tutari giriniz:");
 			scanf("%d", &tutar);
 			
 			if (tutar>bakiye) {
 				
 				printf("yetersiz bakiye");
			 }
			else {
			
 			bakiye -= tutar ;
 			printf("yeni bakiye: %d", bakiye);
 		}
 		
		break;
		
		
		
		case 3:
		
		printf("bakiyeniz: %d\n", bakiye);
 			printf("havale yapilacak tutari giriniz:");
 			scanf("%d", &tutar);
 			
 			if (tutar > bakiye) {
 				
 				printf("yetersiz bakiye");
			 }
			else {
			
 			bakiye += tutar ;
 			printf("yeni bakiye: %d", bakiye);
 		}
 		break;
 		
 		
 		
		case 4:
		printf("bakiyeniz: %d", bakiye);
 		
		break;
		 
		case 5:
		
		printf("Kartiniz iade edilmistir.");
		break;
		
		
		default:	
 		
 		printf("Gecersiz islem");
 			break;
	
 	
 	
 }
 	
 	return 0;
 }
