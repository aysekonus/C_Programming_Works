// 5) Write a function that prints Fibonacci sequence of a positive integer N. 
#include<stdio.h>
int fibonacci (int n,int A[])
{
	A[0]=0; A[1]=1;
	
	for ( int i=2; i<n ; i++)
	{
		A[i] = A[i-1] + A[i-2];	
	} 
	return A[n];
}
int main (){
	int n;
	printf("n sayisini giriniz: ");
	scanf("%d", &n);
	
	int A[n];
	A[n] = fibonacci (n, A);
	
	for (int i=0; i<n ; i++)
	printf("%d. eleman -> %d\n", i+1, A[i]);
}
