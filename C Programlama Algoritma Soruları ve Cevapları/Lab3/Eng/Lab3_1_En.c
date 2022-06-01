#include <stdio.h>

int main(void)
{
	int i,letter=0;
	char sentence;
	
	printf("Enter the sentence: ");
	for(i=0;sentence!='.';i++)
	{
		scanf(" %c",&sentence);
		
		if('A'<=sentence && sentence<='Z')
			letter++;
	}
	
	printf("The number of capital letters in a sentence: %d",letter);
	
	return 0;
}
