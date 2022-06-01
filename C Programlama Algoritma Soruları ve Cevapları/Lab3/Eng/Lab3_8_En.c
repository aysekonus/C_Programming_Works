#include<stdio.h>
int main()
{
	int season;
	
	printf("Enter mounth (1-12):");
	scanf("%d",&season);
	
	if(season>=1 && season<=12)
	{
		if(season==12 || season==1 || season==2)
			printf("Season: Winter");
		else if(season==3 || season==4 || season==5)
			printf("Season: Spring");
		else if(season==6 || season==7 || season==8)
			printf("Season: Summer");
		else
			printf("Season: Autumn");
	}
	
	else
		printf("Error!");
	
	return 0;
}
