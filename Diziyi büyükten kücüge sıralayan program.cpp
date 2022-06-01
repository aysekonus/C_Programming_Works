
#include <stdio.h> 
int main()
{ 
int temp, k, i, dizi[4]={12,8,16,9}; 
for(k=0;k<3;k++) 
	for(i=k+1;i<4;i++)  
		if (dizi[k]<dizi[i])
		{   
			temp=dizi[k];   
			dizi[k]=dizi[i];   
			dizi[i]=temp;
		} 
	for(k=0;k<4;k++) 
		printf("%d\n",dizi[k]); 

	return 0;
}

