//e say�s�n�n form�l�; e say�s�n� n de�eri 20 oluncaya kadar hesaplay�n.
#include<stdio.h>
int main(){
	float toplam=1, faktoriyel=1;
	int n=1;
	while(n<=20)
	{
		faktoriyel*=n;
		toplam+=1/faktoriyel;
		n++;
	}
	printf("e sayisini degeri= %f",toplam);
	return(0);
}
