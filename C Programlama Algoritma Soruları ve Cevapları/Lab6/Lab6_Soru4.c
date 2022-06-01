#include <stdio.h>
int main () {
	int A[5][7] = {
				{10, 11, 12, 13, 1, 3, 5},
				{14, 15, 16, 17, 0, 2, 6},
				{13, 15, 17, 19, 9, 7, 5},
				{2, 4, 6, 8, 10, 12, 14},
				{2, 5, 8, 11, 14, 17, 20},
				};
	int i, j;
	for (i = 0; i < 5; i++) {
	for (j = 0; j < 7; j++) {
	printf("%3d", A[i][j]);
	}
	printf("\n");
	}
	printf("\n");
	/* her saticinin yaptigi toplam satisi (kolon toplami) */
	int sumC;
	for (i = 0; i < 7; i++)
	{
	sumC = 0;
	for (j = 0; j < 5; j++)
	{
	sumC += A[j][i];
	}
	printf("%d. saticinin toplam satisi = %d\n", i + 1, sumC);
	}
	printf("\n");
	
/* Her üründen toplam kaç adet satýldýðý */
	int sumR;
	for (i = 0; i < 5; i++)
	{
	sumR = 0;
	for (j = 0; j <7 ; j++)
	{
	sumR += A[i][j];
	}
	printf("%d. urunun toplam satisi = %d\n", i + 1, sumR);
	}
	printf("\n");
/* Toplam satis miktari */
	int sumA = 0;
	for (i = 0; i < 5; i++)
	{
	for (j = 0; j <7 ; j++)
	{
	sumA += A[i][j];
	}
	}
	printf("Toplam Satis miktari = %d\n", sumA);
	printf("\n");
/* En cok satilan urun ve hangi urun oldugu */
int sumR_max = 0, sumR_max_index = 0;
for (i = 0; i < 5; i++)
{
sumR = 0;
for (j = 0; j <7 ; j++)
{
sumR += A[i][j];
}
if(sumR > sumR_max)
{
sumR_max = sumR;
sumR_max_index = i;
}
}
printf("En cok satilan ürün %d, %d adet satilmiþtir.", sumR_max_index + 1, sumR_max);

printf("\n");
int sumC_max = 0, sumC_max_index = 0;
/* En cok satis yapan satici ve hangi satici oldugu */
for (i = 0; i < 7; i++)
{
sumC = 0;
for (j = 0; j < 5; j++)
{
sumC += A[j][i];
}
if(sumC > sumC_max)
{
sumC_max = sumC;
sumC_max_index = i;
}
}
printf("En cok satis yapan satici %d, %d adet satilmiþtir.", sumC_max_index + 1,
sumC_max);
printf("\n");
int sum3_4 = 0, sum3_4_max = 0, sum3_4_index = 0;
for (i = 0; i < 7; i++)
{
sum3_4 = 0;
for (j = 2; j < 4; j++)
{
sum3_4 += A[j][i];
}
if(sum3_4 > sum3_4_max)
{
sum3_4_max = sum3_4;
sum3_4_index =i;
}
}
printf("\n");
printf("3 ve 4u en cok satan personel %d, %d adet satilmiþtir.", sum3_4_index + 1,
sum3_4_max);
printf("\n");
return 0;
}
