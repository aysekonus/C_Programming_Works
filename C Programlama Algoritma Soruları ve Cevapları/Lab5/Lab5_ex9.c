#include <stdio.h>
#include <stdlib.h>

#define Cevap_Boyutu 40 
#define Frekans_Boyutu 11

int main()
{
  int cevap, derece; 
  int frekans[ Frekans_Boyutu ] = { 0 };
  int cevaplar[ Cevap_Boyutu ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                                      1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 
                                      6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
                                      5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

  for(cevap = 0; cevap < Cevap_Boyutu; ++cevap ){
       ++frekans[ cevaplar [ cevap ] ];
  } 

  printf( "%s%17s\n", "Dereceler", "Frekanslar" );

  for (derece = 1; derece < Frekans_Boyutu; ++derece) {
        printf( "%6d%17d\n", derece, frekans[derece]);
  } 
  system("PAUSE");
  return 0;
} 
