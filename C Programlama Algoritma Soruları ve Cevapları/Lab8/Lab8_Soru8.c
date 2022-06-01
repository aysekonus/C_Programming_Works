//8 ve 9
#include<stdio.h>
int lengtOfString(char a[])
{       
	int Length=0;       
	while (a[Length] != '\0')    
	{         
		Length++;    
 	}     
	return Length;  
} 
 
void findword(char s1[], char s2[]) 
{     
	int strLen, wordLen, i, j, flag, flag_count = 0;     
	strLen = lengtOfString(s1);     
	wordLen = lengtOfString(s2);       
	for(i=0; i<strLen - wordLen; i++)     
	{         // Match word at current position        
	flag = 1;         
	for(j=0; j<wordLen; j++)        
	{             // If word is not matched             
	if(s1[i + j] != s2[j])             
	{                 
	flag = 0;                
	break;             
	}         
	}           // If word have been found then print found message         
	if(flag == 1)         
	{   
	flag_count++;             
	printf("'%s' found at index: %d \n", s2, i);         
	}     
	}     
	if(flag_count == 0)     
	{         
	printf("'%s' not found \n", s2);     
	}     
	else     
	printf("'%s' found %d times", s2, flag_count);   
} 
 
int main() {     
char s1[] = "Yildiz Teknik Üni Teknik ";     
char s2[] = "Teknik";     
findword(s1, s2);       
return 0; 
} 
