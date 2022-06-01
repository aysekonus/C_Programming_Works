#include <stdio.h>
#include <stdlib.h> 
#include<string.h>

int main()
{
	
	FILE *dosya;
	dosya=fopen("text.txt","w+");
	char c,ad[]="yildiz teknik üniversitesi";
	
	if(dosya==NULL)
	{
		printf("dosya acilamadi");
		exit(1);
	}
	
	fputs(ad,dosya);
	
	
	
	fseek(dosya,0,SEEK_SET);
	c=fgetc(dosya);
	c=c-32;
	fseek(dosya,0,SEEK_SET);
	fputc(c,dosya);
	
	
	while(1)
	{
		
		fseek(dosya,0,SEEK_CUR);
		c=fgetc(dosya);
		
		if(feof(dosya)) break;
		
		if(c==' ')
		{
			c=fgetc(dosya);
			c-=32;
			fseek(dosya,-1,SEEK_CUR);
			fputc(c,dosya);
		}
		
	}
	
	fclose(dosya);
	
	return 0;
}
