#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#pragma pack(1)
#define yapiboyutu sizeof(struct ogrenci)

FILE *dosya,*yedek; // fonksiyonlarda dosya islemleri yapýlacaðýndan global tanýmladým

struct dtarih
{
	int gun;
	int ay;
	int yil;
};
struct ogrenci
{
	int num;
	char ad[50];
	char soyad[50];
	struct dtarih bdate;
	float mat;
	float fen;
	float trk;
};
struct ogrenci ogr;
void yenikayit(void);
void kayitsil(void);
void kayitguncelle(void);
void ogrencilistele(void);
void numaraya_gore_sirala(void);
void ada_gore_sirala(void);
void mat_gore_sirala(void);
void fen_gore_sirala(void);
void turkce_gore_sirala(void);
void sirali_kayitlari_yazdir(void);
void cikis(void);

int main(){
	
	int sec;
	do
	{
		system("cls");

		printf("-------------MENU-------------:\n\n\n");
		printf(" 1) Ogrenci kaydini eklemek\n 2) Ogrenci kaydini silmek\n 3) Ogrenci kaydini guncellemek\n 4) Tüm ogrencileri ekranda listelemek\n 5) Ogrenci numarasina gore kayitlari siralamak\n 6) Ogrenci ismine gore kayitlari siralamak\n 7) Matematik notuna gore siralama\n 8) Fen notuna gore siralama\n 9) Turkce notuna gore siralama\n 10) Sirali kayitlari sorted.bin dosyasina yazdirmak\n 11) Cikis");
		printf("\n\nYapilmasini istediginiz islemi giriniz: ");
		scanf("%d",&sec);
  
		switch(sec)
		{
   			case 1: { yenikayit(); break;}
   			case 2: { kayitsil(); break;}
   			case 3: { kayitguncelle(); break;}
   			case 4: { ogrencilistele(); break;}
   			case 5: { numaraya_gore_sirala(); break;}
   			case 6: { ada_gore_sirala(); break;}
   			case 7: { mat_gore_sirala(); break;}
   			case 8: { fen_gore_sirala(); break;}
   			case 9: { turkce_gore_sirala(); break;}
   			case 10:{ sirali_kayitlari_yazdir(); break;}
   			case 11:{ fclose(dosya); return 0;}
   			default:{ printf("!!! HATALI GIRIS !!!");}
  		}
		
	}while(1);
 		getch();
 		return 0;
	}
	
	
void yenikayit(void){
	
	system("cls");
	dosya=fopen("student.bin","a+b"); //a+ yaptým çünkü r+'da datayý her giriþte boþaltýp yerine yazýyordu.
	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
	
	puts("\nOgrenci bilgilerini girin: ");
 	do // Önce bellege yazdýrýyoruz.
	{
  		fflush(stdin);
  		printf("\nAD: ");
   		scanf("%s",ogr.ad);
   		printf("\nSOYAD: ");
   		scanf("%s",ogr.soyad);
  		printf("\nOGRENCI NUMARASI: ");
   		scanf("%d",&ogr.num);
   		printf("\nDOGUM TARIHI: ");
   		scanf("%d/%d/%d",&ogr.bdate.gun,&ogr.bdate.ay,&ogr.bdate.yil);
   		printf("\nMATEMATIK NOTU: ");
   		scanf("%f",&ogr.mat);
   		printf("\nFEN BILGISI NOTU: ");
   		scanf("%f",&ogr.fen);
   		printf("\nTURKCE NOTU: ");
   		scanf("%f",&ogr.trk);
   		printf("\n");
   		//Sonra dosyaya yazdýrýyoruz.
   		fprintf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr.ad,ogr.soyad,ogr.num,ogr.bdate.gun,ogr.bdate.ay,ogr.bdate.yil,ogr.mat,ogr.fen,ogr.trk);
   		puts("Yeni bir kayit icin herhangi bir tusa, cikmak icin ESC tusuna basiniz.");
   		
		}while(getch()!=27);
 	
	fclose(dosya);
 	puts("\nBilgiler kaydedildi devam etmek icin herhangi bir tusa basiniz.");
 	getch();
}
	
void kayitsil(void){
	
	system("cls");
	int numara,durum=0; //durum 1 olduðunda kayýt silinmiþ demektir.
 	printf("\nSilinecek ogrencinin numarasini giriniz: ");
 	scanf("%d",&numara);
 	
	dosya=fopen("student.bin","r+b");// sinif dosyasýndan sadece okuma yapilacak bu yüzden r kullanýyoruz.
 	yedek = fopen("yedek.bin","w+b");// yedek dosyasýna yazma islemi yapacaðýz.
 	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
	
	while(!feof(dosya))
	{
		// dosyayý okuyoruz ve degerleri belleðe yazýyoruz
		fscanf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr.ad,ogr.soyad,&ogr.num,&ogr.bdate.gun,&ogr.bdate.ay,&ogr.bdate.yil,&ogr.mat,&ogr.fen,&ogr.trk);
		
		if(numara != ogr.num) //Okunan deðer yedek dosyasýna yazýlýr
		{
			fprintf(yedek,"%s %s %d %d/%d/%d %f %f %f",ogr.ad,ogr.soyad,ogr.num,ogr.bdate.gun,ogr.bdate.ay,ogr.bdate.yil,ogr.mat,ogr.fen,ogr.trk);
		}	
		
		else durum=1; // Numara okunan deðere eþitse , okunan o deðer yedek dosyasýna yazýlmaz böylece o deðer silinmiþ olur	
	}
	
	fclose(dosya);
 	fclose(yedek);
 	
	if(durum == 1)
 	{
 		remove("student.bin"); //silmek icin
  		rename("yedek.bin","student.bin"); // isim deðiþikliði için
  		puts("Silme islemi tamamlandi, devam etmek icin bir tusa basin");
	}
	
	else // durum=1 deðilse okunan deðer silinmemiþtir, daha doðrusu girilen numara dosyada bulunmamaktadýr
	{
  		remove("yedek.bin"); // yedek dosyasýný kullanamadýgýmýzdan siliyoruz
  		printf("%d numarasinda bir ogrenci bulunamadi devam etmek icin bir tusa basin",numara);
 	}
	
	fflush(stdin);
 	getch();
}

void kayitguncelle(void){
	
	system("cls");
	int numara,durum=0;//durum =0 ise deðiþtirme iþlemi gerçekleþmemiþtir.
 	printf("\nBilgilerini degistireceginiz ogrencinin numarasini giriniz: ");
 	scanf("%d",&numara);
 	
 	dosya=fopen("student.bin","r+b");// sinif dosyasýndan sadece okuma yapilacak bu yüzden r kullanýyoruz.
 	yedek=fopen("yedek.bin","w+b");// yedek dosyasýna yazma islemi yapacaðýz.
 	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
 
 	while(!feof(dosya))
	{
 		fscanf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr.ad,ogr.soyad,&ogr.num,&ogr.bdate.gun,&ogr.bdate.ay,&ogr.bdate.yil,&ogr.mat,&ogr.fen,&ogr.trk);
		
		if(numara != ogr.num) //Okunan deðer yedek dosyasýna yazýlýr
		{
			fprintf(yedek,"%s %s %d %d/%d/%d %f %f %f",ogr.ad,ogr.soyad,ogr.num,ogr.bdate.gun,ogr.bdate.ay,ogr.bdate.yil,ogr.mat,ogr.fen,ogr.trk);
		}	
		
		else //Deðerler deðiþtirilir.
		{
			fflush(stdin);
			int secim4;
			printf("\n\t1- Ogrenci ad guncelleme\n\t2- Ogrenci soyad guncelleme\n\t3- Ogrenci numarasi guncelleme\n\t4- Ogrenci dogum tarihi guncelleme\n\t5- Ogrenci matematik notu guncelleme\n\t6- Ogrenci fen bilgisi notu guncelleme\n\t7- Ogrenci turkce notu guncelleme");
			printf("\n\nYapmak istediginiz islemi seciniz: "); scanf("%d",&secim4);
			
			switch(secim4)
			{
				case 1: {
					
					printf("\nAD: "); scanf("%s",ogr.ad);
   					fprintf(yedek,"%s",ogr.ad);
					break;
				}
				
				case 2: {
					
					printf("\nSOYAD: "); scanf("%s",ogr.soyad);
   					fprintf(yedek,"%s",ogr.soyad);
					break;
				}
				
				case 3: {
					
					printf("\nNUMARA: "); scanf("%d",&ogr.num);
   					fprintf(yedek,"%d",ogr.num);
					break;
				}
				
				case 4: {
					
					printf("\nDOGUM TARIHI: "); scanf("%d/%d/%d",&ogr.bdate.gun,&ogr.bdate.ay,&ogr.bdate.yil);
   					fprintf(yedek,"%d/%d/%d",ogr.bdate.gun,ogr.bdate.ay,ogr.bdate.yil);
					break;
				}
				
				case 5: {
					
					printf("\nMATEMATIK NOTU: "); scanf("%.2f",&ogr.mat);
   					fprintf(yedek,"%.2f",ogr.mat);
					break;
				}
				
				case 6: {
					
					printf("\nFEN BILGISI NOTU: "); scanf("%.2f",&ogr.fen);
   					fprintf(yedek,"%.2f",ogr.fen);
					break;
				}
				
				case 7: {
					
					printf("\nTURKCE NOTU: "); scanf("%.2f",&ogr.trk);
   					fprintf(yedek,"%.2f",ogr.trk);
					break;
				}
				
				default:{ printf("!!! HATALI GIRIS !!!");}	
			}
			
   			printf("\n");
			durum=1; // deðiþme yapýldý.
		}
	}
		fclose(dosya);
 		fclose(yedek);
 		if(durum == 1) //deðiþme islemi yapilirsa
		{ 
  			remove("student.bin");
  			rename("yedek.bin","student.bin");
  			puts("Ogrenci bilgileri degistirildi devam etmek icin bir tusa basin");	
 		}
		
		else
		{
  			remove("yedek.bin");
 			puts("Ilgili ogrenci bulunamadi devam etmek icin bir tusa basin");
 		}
 		
		fflush(stdin);
 		getch();
	}
 

void ogrencilistele(void){
	
	system("cls");
	int i;
	dosya=fopen("student.bin","r+b");
	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
	
	printf("\n\n\t\t\t\t----KAYITLI OGRENCILER----\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("  ISIM	    SOYISIM	  NUMARA      DOGUM TARIHI  	MATEMATIK NOTU	    FEN BILGISI NOTU	  TURKCE NOTU");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");

	while(!feof(dosya))
	{
		//fflush(stdout);
		fscanf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr.ad,ogr.soyad,&ogr.num,&ogr.bdate.gun,&ogr.bdate.ay,&ogr.bdate.yil,&ogr.mat,&ogr.fen,&ogr.trk);

		if(ogr.ad != NULL)
		{
			printf("\n%5s%13s%15d%9d/%d/%d%15.f%18.f%22.f",ogr.ad,ogr.soyad,ogr.num,ogr.bdate.gun,ogr.bdate.ay,ogr.bdate.yil,ogr.mat,ogr.fen,ogr.trk);
			
		}
	}
	
	fclose(dosya);
 	printf("\n\n\nOgrenci bilgileri listelendi, devam etmek icin bir tusa basin");
 	getch();
	
}


void numaraya_gore_sirala(void){
	
	struct ogrenci temp;
	int kayitsayisi=0,i,j;
	
	dosya=fopen("student.bin","a+b");
	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
	
	fseek(dosya,0,SEEK_END);
	kayitsayisi=ftell(dosya)/sizeof(struct ogrenci);
	fseek(dosya,0,SEEK_SET);
	
	fscanf(dosya,"%d",&kayitsayisi);
	struct ogrenci ogr[kayitsayisi];
	
	for(i=0; i<kayitsayisi; i++)
	{
		fscanf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr[i].ad,ogr[i].soyad,&ogr[i].num,&ogr[i].bdate.gun,&ogr[i].bdate.ay,&ogr[i].bdate.yil,&ogr[i].mat,&ogr[i].fen,&ogr[i].trk);
	}
	
	//sýralayalým
	
	for(i=0;i<kayitsayisi;i++)
	{
   		for(j=i+1;j<kayitsayisi;j++)
		{
        	if(ogr[i].num>ogr[j].num)
			{
            	temp=ogr[i];
            	ogr[i]=ogr[j];
            	ogr[j]=temp;
        	}	
    	}
	}
	//dosyaya yazdýralým
	for(i=0;i<kayitsayisi;i++)
	{
		fprintf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr[i].ad,ogr[i].soyad,ogr[i].num,ogr[i].bdate.gun,ogr[i].bdate.ay,ogr[i].bdate.yil,ogr[i].mat,ogr[i].fen,ogr[i].trk);
	}
	
	system("cls");
	
	printf("\n\n\t\t\t\t----NUMARAYA GORE SIRALI KAYITLI OGRENCILER----\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("  ISIM	    SOYISIM	  NUMARA      DOGUM TARIHI  	MATEMATIK NOTU	    FEN BILGISI NOTU	  TURKCE NOTU");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	
		for(i=0;i<kayitsayisi;i++)
		{
	   			printf("\n%6s%11s%15d%10d/%d/%d%20f%20f%20f",ogr[i].ad,ogr[i].soyad,ogr[i].num,ogr[i].bdate.gun,ogr[i].bdate.ay,ogr[i].bdate.yil,ogr[i].mat,ogr[i].fen,ogr[i].trk);
		}


	fclose(dosya);
	printf("\n\n\nOgrenci listesi numaraya gore siralandi.");
	getch();
}




void mat_gore_sirala(void){
	
	struct ogrenci temp;
	int kayitsayisi=0,i,j;
	
	dosya=fopen("student.bin","r+b");
	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
	
	fseek(dosya,0,SEEK_END);
	kayitsayisi=ftell(dosya)/sizeof(struct ogrenci);
	fseek(dosya,0,SEEK_SET);
	
	fscanf(dosya,"%d",&kayitsayisi);
	struct ogrenci ogr[kayitsayisi];
	
	for(i=0; i<kayitsayisi; i++)
	{
		fscanf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr[i].ad,ogr[i].soyad,&ogr[i].num,&ogr[i].bdate.gun,&ogr[i].bdate.ay,&ogr[i].bdate.yil,&ogr[i].mat,&ogr[i].fen,&ogr[i].trk);
	}
	
	fclose(dosya);
	for(i=0;i<kayitsayisi;i++)
	{
   		for(j=i+1;j<kayitsayisi;j++)
		{
        	if(ogr[i].mat>ogr[j].mat)
			{
            	temp=ogr[i];
            	ogr[i]=ogr[j];
            	ogr[j]=temp;
        	}	
    	}
	}
	
	for(i=0;i<kayitsayisi;i++)
	{
		fprintf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr[i].ad,ogr[i].soyad,ogr[i].num,ogr[i].bdate.gun,ogr[i].bdate.ay,ogr[i].bdate.yil,ogr[i].mat,ogr[i].fen,ogr[i].trk);
	}
	
	system("cls");
	
	printf("\n\n\t\t\t\t----MATEMATIK NOTUNA GORE SIRALI KAYITLI OGRENCILER----\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("  ISIM	    SOYISIM	  NUMARA      DOGUM TARIHI  	MATEMATIK NOTU	    FEN BILGISI NOTU	  TURKCE NOTU");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	
		for(i=0;i<kayitsayisi;i++)
		{
	   			printf("\n%6s%11s%15d%10d/%d/%d%20f%20f%20f",ogr[i].ad,ogr[i].soyad,ogr[i].num,ogr[i].bdate.gun,ogr[i].bdate.ay,ogr[i].bdate.yil,ogr[i].mat,ogr[i].fen,ogr[i].trk);
		}

	
	fclose(dosya);
	printf("\n\n\nOgrenci listesi matematik notuna gore siralandi.");
	getch();
}

void fen_gore_sirala(void){
	
	struct ogrenci temp;
	int kayitsayisi=0,i,j;
	
	dosya=fopen("student.bin","r+b");
	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
	
	fseek(dosya,0,SEEK_END);
	kayitsayisi=ftell(dosya)/sizeof(struct ogrenci);
	fseek(dosya,0,SEEK_SET);
	
	fscanf(dosya,"%d",&kayitsayisi);
	struct ogrenci ogr[kayitsayisi];
	
	for(i=0; i<kayitsayisi; i++)
	{
		fscanf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr[i].ad,ogr[i].soyad,&ogr[i].num,&ogr[i].bdate.gun,&ogr[i].bdate.ay,&ogr[i].bdate.yil,&ogr[i].mat,&ogr[i].fen,&ogr[i].trk);
	}
	
	fclose(dosya);
	for(i=0;i<kayitsayisi;i++)
	{
   		for(j=i+1;j<kayitsayisi;j++)
		{
        	if(ogr[i].fen>ogr[j].fen)
			{
            	temp=ogr[i];
            	ogr[i]=ogr[j];
            	ogr[j]=temp;
        	}	
    	}
	}
	
	for(i=0;i<kayitsayisi;i++)
	{
		fprintf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr[i].ad,ogr[i].soyad,ogr[i].num,ogr[i].bdate.gun,ogr[i].bdate.ay,ogr[i].bdate.yil,ogr[i].mat,ogr[i].fen,ogr[i].trk);
	}
	
	system("cls");
	
	printf("\n\n\t\t\t\t----FEN BILGISI NOTUNA GORE SIRALI KAYITLI OGRENCILER----\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("  ISIM	    SOYISIM	  NUMARA      DOGUM TARIHI  	MATEMATIK NOTU	    FEN BILGISI NOTU	  TURKCE NOTU");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	
		for(i=0;i<kayitsayisi;i++)
		{
			if(ogr[i].fen != NULL)
	   			printf("\n%6s%11s%15d%10d/%d/%d%20f%20f%20f",ogr[i].ad,ogr[i].soyad,ogr[i].num,ogr[i].bdate.gun,ogr[i].bdate.ay,ogr[i].bdate.yil,ogr[i].mat,ogr[i].fen,ogr[i].trk);
		}
	
	fclose(dosya);
	printf("\n\n\nOgrenci listesi fen bilgisi notuna gore siralandi.");
	getch();
}

void turkce_gore_sirala(void){
	
	struct ogrenci temp;
	int kayitsayisi=0,i,j;
	
	dosya=fopen("student.bin","r+b");
	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
	
	fseek(dosya,0,SEEK_END);
	kayitsayisi=ftell(dosya)/sizeof(struct ogrenci);
	fseek(dosya,0,SEEK_SET);
	
	fscanf(dosya,"%d",&kayitsayisi);
	struct ogrenci ogr[kayitsayisi];
	
	for(i=0; i<kayitsayisi; i++)
	{
		fscanf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr[i].ad,ogr[i].soyad,&ogr[i].num,&ogr[i].bdate.gun,&ogr[i].bdate.ay,&ogr[i].bdate.yil,&ogr[i].mat,&ogr[i].fen,&ogr[i].trk);
	}
	
	fclose(dosya);
	for(i=0;i<kayitsayisi;i++)
	{
   		for(j=i+1;j<kayitsayisi;j++)
		{
        	if(ogr[i].trk>ogr[j].trk)
			{
            	temp=ogr[i];
            	ogr[i]=ogr[j];
            	ogr[j]=temp;
        	}	
    	}
	}
	
	for(i=0;i<kayitsayisi;i++)
	{
		fprintf(dosya,"%s %s %d %d/%d/%d %f %f %f",ogr[i].ad,ogr[i].soyad,ogr[i].num,ogr[i].bdate.gun,ogr[i].bdate.ay,ogr[i].bdate.yil,ogr[i].mat,ogr[i].fen,ogr[i].trk);
	}
	
	system("cls");
	
	printf("\n\n\t\t\t\t----TURKCE NOTUNA GORE SIRALI KAYITLI OGRENCILER----\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("  ISIM	    SOYISIM	  NUMARA      DOGUM TARIHI  	MATEMATIK NOTU	    FEN BILGISI NOTU	  TURKCE NOTU");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	
		for(i=0;i<kayitsayisi;i++)
		{
			if(ogr[i].trk != NULL)
	   			printf("\n%6s%11s%15d%10d/%d/%d%20f%20f%20f",ogr[i].ad,ogr[i].soyad,ogr[i].num,ogr[i].bdate.gun,ogr[i].bdate.ay,ogr[i].bdate.yil,ogr[i].mat,ogr[i].fen,ogr[i].trk);
		}
	
	fclose(dosya);
	printf("\n\n\nOgrenci listesi turkce notuna gore siralandi.");
	getch();
}


void ada_gore_sirala(void){
	
	int kayitsayisi=0;
	int x,y;
	
	dosya=fopen("student.bin","a+b");
	
	if(dosya==NULL)
 	{
  		dosya=fopen("student.bin","w+b");
	}
	
	fseek(dosya,0,SEEK_END);
	kayitsayisi=ftell(dosya)/sizeof(struct ogrenci);
	
	fscanf(dosya,"%d",&kayitsayisi);
	struct ogrenci ogr[kayitsayisi];
	struct ogrenci temp[kayitsayisi];
	
	for (x=0; x<kayitsayisi; x++)
    {
        fread(&ogr[x],sizeof(ogr),1,dosya);
    }
    
    for (x = 1; x < kayitsayisi; x++)
    {
        for (y = 1; y < kayitsayisi; y++)
        {
            if (strcmp(ogr[y - 1].ad, ogr[y].ad) > 0)
            {
            	temp[kayitsayisi]=ogr[y-1];
            	ogr[y-1]=ogr[y];
            	ogr[y]=temp[kayitsayisi];
            	
            }
        }
    }

    system("cls");
    printf("\n\n\t\t\t\t----ALFABETIK SIRALI OGRENCI KAYDI----\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("  ISIM	    SOYISIM	  NUMARA      DOGUM TARIHI  	MATEMATIK NOTU	    FEN BILGISI NOTU	  TURKCE NOTU");
	printf("\n---------------------------------------------------------------------------------------------------------------\n");
	

		for (x = 0; x < kayitsayisi; x++)
	   		printf("\n%6s%11s%15d%10d/%d/%d%20f%20f%20f",ogr[kayitsayisi].ad,ogr[kayitsayisi].soyad,ogr[kayitsayisi].num,ogr[kayitsayisi].bdate.gun,ogr[kayitsayisi].bdate.ay,ogr[kayitsayisi].bdate.yil,ogr[kayitsayisi].mat,ogr[kayitsayisi].fen,ogr[kayitsayisi].trk);
		
	fclose(dosya);
 	printf("\n\n\nOgrenci bilgileri listelendi, devam etmek icin bir tusa basin");
 	
getch();
}
	

	
void sirali_kayitlari_yazdir(void){
	
	FILE *fp;
	fp=fopen("sorted.bin","wb");
	if(fp==NULL)
	{
		printf("dosya acilamadi");
		exit(1);
	}
	int secim3;
	do
	{
		system("cls");
		printf("\n\n\t1- Ogrenci numarasina gore sirali kayit listesi\n\t2- Ogrenci ismine gore alfabetik sirali kayit listesi\n\t3- Matematik notuna gore sirali kayit listesi\n\t4- Fen notuna gore sirali kayit listesi\n\t5- Turkce notuna gore sirali kayit listesi");  
		printf("\n\nGORMEK ISTEDIGINIZ SIRALAMAYI SECINIZ: ");
		scanf("%d",&secim3);
	
		switch(secim3)
		{
			case 1: //numaraya göre
			{
				numaraya_gore_sirala();
				fwrite(&ogr,sizeof(ogr),1,fp);
				fclose(fp);
				break;
			}
			case 2: //ada göre
			{
				ada_gore_sirala();
				fwrite(&ogr,sizeof(ogr),1,fp);
				fclose(fp);
				break;
			}
			case 3: //mat göre
			{
				mat_gore_sirala();
				fwrite(&ogr,sizeof(ogr),1,fp);
				fclose(fp);
				break;
			}
			case 4: //fen göre
			{
				fen_gore_sirala();
				fwrite(&ogr,sizeof(ogr),1,fp);
				fclose(fp);
				break;
			}
			case 5: //trk göre
			{
				turkce_gore_sirala();
				fwrite(&ogr,sizeof(ogr),1,fp);
				fclose(fp);
				break;
			}
			default:{ printf("!!! HATALI GIRIS !!!");}
		}
	}while(1);
 	
printf("sorted.bin dosyasina yazdirildi.");
getch();
}
