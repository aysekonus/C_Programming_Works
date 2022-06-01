//e sayýsýnýn formülü; e sayýsýný n deðeri 20 oluncaya kadar hesaplayýn.
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
