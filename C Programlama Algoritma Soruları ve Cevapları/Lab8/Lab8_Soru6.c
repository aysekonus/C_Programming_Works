//6)	Write your strcat(char *A, char *B) function which append B at the end of A. (You can use strlenfunc.)

#include<stdio.h>
#include<string.h>
int ekle (char *A, char *B)
{
	int a= strlen(A),i;
	int b= strlen(B);
	char C[a+b];
	for (i=0; i<a; i++)
	{
	C[i]=A[i];
	}
	int k=0,j;
	for (j=a; j<a+b; j++)
	{
	C[j]=B[k];
	k++;
	}
	puts(C);
}

int main(){
	char A[] = "merhaba";
	char B[] ="nasilsin";
	
	ekle (A,B);
}
