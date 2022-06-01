#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int alttaban;
	int usttaban;
	int yukseklik;
	float alan;
	
	printf("yamugunuzun alt tabanini giriniz:\n");
	scanf("%d", &alttaban);
	printf("yamugunuzun ust tabanini giriniz:\n");
	scanf("%d", &usttaban);
	printf("yamugunuzun yuksekligini giriniz:\n");
	scanf("%d", &yukseklik);
	alan= ((alttaban+usttaban)*yukseklik)/2;
	printf("yamugunuzun alani %2.f'dir'", alan);
	
	
	
	return 0;
}
