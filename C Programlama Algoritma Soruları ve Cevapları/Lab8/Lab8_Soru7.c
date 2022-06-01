#include <stdio.h> 
 
int lengtOfString(char a[])
{       
	int Length=0;       
	while (a[Length] != '\0')    
 	{      
	 Length++;     
	}     
	return Length;   
} 
 
void Concatenate(char s1[], char s2[]){       
	int i, j, flag = 1;     
	i = lengtOfString(s1);     
	j = lengtOfString(s2);     
	for(i = 0, j = 0; s1[i] != '\0'  || s2[j] != '\0'; i++, j++)     
	{   
		if(s1[i] != s2[j])         
		flag = 0;       
	}     
	if (flag == 1) {         
	printf("Strings are same");     } 
	else {         
	printf("Strings are different");     } 
 
} 
 
int main() {     
	char s1[100], s2[100];       
	printf("Enter first string: ");     
	gets(s1);     
	printf("Enter second string: ");     
	gets(s2);     
	Concatenate(s1, s2);     
	return 0;
 } 
