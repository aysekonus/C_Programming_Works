#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int sayac=1;
void AraBulYaz(char[],char[],int);
//void TersCevir(char[]);  // Gönderilen karakter dizisini ters cevirir
int main()
{
    char cumle[200];
    char aranan[5];
    int i,uz_cumle,uz_aranan;


    printf("cumle giriniz: ");
    gets(cumle);
    printf("\nbir kelime giriniz: ");
    gets(aranan);

    uz_cumle = strlen(cumle);
    uz_aranan = strlen(aranan);

    //TersCevir(aranan); // Aranacak kelime ters cevrildi

    printf("\tGirilen cumle: %s\n",cumle);

    for(i=0;i<uz_cumle;i++)
        AraBulYaz(cumle,aranan,i);


    printf("\n\nArama Sona Erdi...");
    
    return 0;
}

void AraBulYaz(char cumle[100],char aranan[100],int i)
{
    int j,k=0;
    for (j=i ; j<i+strlen(aranan) ; j++ )
    {
     if(cumle[j]!=aranan[k])
            return;
        k++;
    }

    printf("%s kelimesi bulundu",aranan,sayac++);
    
   	
}



void TersCevir(char kelime[])
{
    char temp[5];
    int uzunluk,i;

    uzunluk=strlen(kelime);

    for(i=0;i<=uzunluk-1;i++)  //Kelimenin Tersini Temp'e aktarýr
        temp[i] = kelime[uzunluk-1-i];

    temp[uzunluk]='\0';

    for(i=0;i<=uzunluk-1;i++) //Kelimeyi Temp ile eþitler
        kelime[i]=temp[i];

    return;
}




