#include <stdio.h>

int main()
{
	int i,sayi,toplam,sonuc;
	
	toplam=0;
	i=1;
	
	while (i<=5)
	{
		printf("sayilari giriniz ");
		scanf("%d",&sayi);
		
		toplam+=sayi;
		
		i++;
	}
	
	printf("sonuc: %d",toplam);
	
	
	
	
	
		
	return 0;
}
