#include<stdio.h>
int main(){
	int A[4][4]={
	{0,11,-6,-8},
	{-11,0,89,5},
	{6,-89,0,9},
	{8,-5,-9,0}
	};
	
	int ters_simetri=1;
	//simetrik mi deðil mi?
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if (i==j && A[i][j]!=0)
			{
			ters_simetri=0;
			break;	
			}
			if(A[i][j]+A[j][i]!=0)
			{
				ters_simetri=0;
				break;
			}
		}
	}
	
	if(ters_simetri==0)
	printf("matris ters simetrik degildir\n");
	else
	printf("ters simetrik matris");
	
}
