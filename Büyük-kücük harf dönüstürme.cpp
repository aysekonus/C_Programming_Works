#include <stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("text.txt","w+");
	char c,ad[]="Yildiz Teknik";
	fputs(ad,fp);
	
	fseek(fp,0,SEEK_SET);
	while(1)
	{
		fseek(fp,0,SEEK_CUR);
		c=fgetc(fp);
		if(feof(fp)) return 0;
		if(c>='a'&&c<='z')
		{
			c=c-32;
			fseek(fp,-1,SEEK_CUR);
			fputc(c,fp);
		}
		else if(c>='A' && c<= 'Z')
		{
			c=c+32;
			fseek(fp,-1,SEEK_CUR);
			fputc(c,fp);
		}
	}
	
	
	fclose(fp);
	return 0; 
}
