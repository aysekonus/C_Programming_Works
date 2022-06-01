#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	/*
	char ad[100];
	
	printf("bir isim giriniz: ");
	scanf("%s",ad);
	printf("%s'nin uzunlugu: %d",ad,strlen(ad));
	
	*/
	
	/*
	char dizi[100];
	
	printf("merhaba %s",strcpy(dizi,"AYYUS"));
	
	*/
	
	/*
	char isim[100];
	int i;
	printf("4 isim giriniz:\n ");
	
	for(i=0;i<4;i++)
	{
		scanf("%s",isim);
		printf("\n%s'nin uzunlugu: %d\n",isim,strlen(isim));
	}
	
	*/
	/*
	char dizi[]="bolum birincisi: ",dizi2[100];
	printf("bolum birincisini giriniz: ");
	scanf("%s",dizi2);
	printf("%s",strcat(dizi,dizi2));
	
	printf("\nuzunlugu: %d",strlen(dizi2));
	*/
	
	char isim[][500]={"ayse","ismail","yusuf","rumeysa","zübeyde","senay","mehmet"};
	char temp[500];
	int i,j;
	
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(strcmp(isim[j],isim[j+1])>0)
			{
				strcpy(temp,isim[j]);
				strcpy(isim[j],isim[j+1]);
				strcpy(isim[j+1],temp);
			}
		}
	}
	
	printf("\nALFABETIK OLARAK SIRALI HALI:\n\n");
	for(i=0;i<7;i++)
	{
		printf("%s\n",isim[i]);
	}
	

/*	
	char ad[100];
	printf("bir ad giriniz: ",ad);
	scanf("%s",&ad);
	printf("\ntersten yazilisi: %s",strrev(ad));
	
*/
/*
	char ad[20];
	printf("bir ad giriniz:");
	scanf("%s",ad);
	printf("%s",strlwr(ad));	
*/
	
/*		
	char ad[20];
	printf("bir ad giriniz:");
	scanf("%s",ad);
	printf("%s",strupr(ad));	
*/


	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
