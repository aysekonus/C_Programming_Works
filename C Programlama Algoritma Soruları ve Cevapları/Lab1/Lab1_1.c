#include <stdio.h>

/* program sayýlarý farklý printf formatlarýyla göstermektedir
her bir printf komutunu dikkatlice inceleyiniz*/
int main()
{
	int t=234;
	float a=12.2345;
	
	printf("%12d,  %5.2f\n",t,a);
	printf("%-12d, %5.3f\n",t,a);
	printf("%012d, %5.4f\n",t,a);
	printf("%2d ,  %5.1f\n",t,a);
	printf("%-2d,  %-.2f\n",t,a);
	printf("**********\n");
	printf("scintefic format:  %e,  \n",a);
	return(0);
}

