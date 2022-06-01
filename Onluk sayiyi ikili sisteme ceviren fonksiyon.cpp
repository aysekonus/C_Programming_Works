#include<stdio.h>

void fonk(long int N){
	long int quotient,remainder;
	int binaryNumber[100],i=1,j;
	quotient = N;
	
	while(quotient!=0){
		binaryNumber[i++]= quotient % 2;
		quotient = quotient / 2;
	}

	printf("Ondalik Sayinin ikiliye Donusturulmus Hali: ");
	for(j = i -1 ;j> 0;j--)
		printf("%d",binaryNumber[j]);
	
}


int main(){
	long int decimalNumber;
	
	printf("Ondalik Sayi Giriniz: ");
	scanf("%ld",&decimalNumber);
	fonk(decimalNumber);
	return 0;
}



