#include <stdio.h>
int main(void)
{
	char yildiz;
	printf("Karakter Giriniz:");
	scanf("%c",&yildiz);
	printf("%5c\n%6c\n%7c\n",yildiz,yildiz,yildiz);
	printf("%3c%c%c%c%c%c\n",yildiz,yildiz,yildiz,yildiz,yildiz,yildiz);
	printf("%7c\n%6c\n%5c\n",yildiz,yildiz,yildiz);
	return(0);
}
