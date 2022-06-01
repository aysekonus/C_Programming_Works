#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	FILE *dosya;
	dosya=fopen("text.txt","w+");
	char c,temp;
	int i,k;
	char ad[]="ayse konus";
	
		if(dosya==NULL)
	{
		printf("The file is not opened!!");
		exit(1);
	}
	fputs(ad,dosya);
	
	fseek(dosya,0,SEEK_END);
	k=ftell(dosya);
	
	
	for(i=0;i<=k/2;i++)
	{
		fseek(dosya,i,SEEK_SET);
		
		c=fgetc(dosya);
		temp=c;
		
		fseek(dosya,-1-i,SEEK_END);
		c=fgetc(dosya);
		
		fseek(dosya,i,SEEK_SET);
		fputc(c,dosya);
		
		fseek(dosya,-1-i,SEEK_END);
		fputc(temp,dosya);
		
	}
	
	
	fclose(dosya);
	
	
	
	
	
	
	return 0;
}
