#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3

struct nokta 
{
	int x1;
	int y1;
};

struct daire
{
	int x2;
	int y2;
	int yaricap;
};

void kontrol(struct nokta, struct daire);
void iki_noktaarasi_mesafe(struct nokta, struct daire);
void cevre(struct daire);
void alan(struct daire);
void ikidairearasialan(struct daire);

int main()
{
	struct nokta k1;
	puts("noktanin koordinatlarini giriniz:");
	printf("x: "); scanf("%d",&k1.x1);
	printf("\ny: "); scanf("%d",&k1.y1);
	
	struct daire k2;
	puts("dairenin bilgilerini giriniz:");
	printf("x: "); scanf("%d",&k2.x2);
	printf("\ny: "); scanf("%d",&k2.y2);
	printf("\nyaricap: "); scanf("%d",&k2.yaricap);
	
	iki_noktaarasi_mesafe(k1,k2);
	kontrol(k1,k2);
	cevre(k2);
	alan(k2);
	ikidairearasialan(k2);	
	
		return 0;
}

void iki_noktaarasi_mesafe(struct nokta k1, struct daire k2)
{
	float sonuc = 0;
	sonuc = sqrt((k2.x2-k1.x1)*(k2.x2-k1.x1)+(k2.y2-k1.y1)*(k2.y2-k1.y1));
	printf("iki nokta arasi mesafe: %f",sonuc);
	printf("\n\n");
}


void kontrol(struct nokta k1, struct daire k2)
{
	float c=0,mesafe;
   
    c= pow(k1.x1-k2.x2,2)+ pow(k1.y1-k2.y2,2);
   
    mesafe=pow(c,0.5);
   
    if(mesafe<=(k2.yaricap))
    {
    	printf("Nokta cemberin icindedir");
	}
        
     else printf("Nokta cemberin disindadir");
	
	printf("\n\n");

}

void cevre(struct daire k2)
{
	int son=0;
	son=2*PI*k2.yaricap;
	printf("dairenin cevresi: %d",son);
	printf("\n\n");
}

void alan(struct daire k2)
{
	int s=0;
	s=PI*(k2.yaricap)*(k2.yaricap);
	printf("dairenin alani: %d",s);
	printf("\n\n");
}

void ikidairearasialan(struct daire k2)
{
	int r;
	puts("ikinci dairenizin yaricapini giriniz:");
	printf("r: "); scanf("%d",&r);
	
	int idaa=0;
	idaa=(PI*(k2.yaricap)*(k2.yaricap))-(PI*r*r);
	printf("iki daire arasindaki alan: %d",idaa);
}





