#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float pi=0;
	
	printf("Enter 'n' number:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		pi+=((4*pow(-1,i))/(2*i+1));
	}
	
	printf("pi = %f",pi);
	
	return 0;
}
