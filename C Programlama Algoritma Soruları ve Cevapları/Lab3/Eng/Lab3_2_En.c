#include<stdio.h>
int main()
{
	
	float rabbits=1042,birds=2272;
	int years=0;
	
	while(rabbits>!birds)
	{
		rabbits*=0.038;
		birds*=0.012;
		years++;
	}
	
	printf("The number of rabbits will pass the number of birds after %d years.",years);
	
	return 0;
}
