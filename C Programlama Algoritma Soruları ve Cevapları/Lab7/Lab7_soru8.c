// 8)Write a C function that specifies if a matrix is symmetric or not. (useconst specifier.)

#include<stdio.h>

int matris ( int A[3][3] )
{
	int simetri=1;
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			if ( A[i][j] != A[j][i]){
			simetri=0;
			break;
			}
		}
	}
	if ( simetri == 1)
	printf("matris simetriktir.");
	
	else
	printf("matris simetrik degildir.");
}

int main (){
	int A[3][3] ={ {1,3,4}, {3,2,5}, {4,5,3} };
	
	matris (A);
}
