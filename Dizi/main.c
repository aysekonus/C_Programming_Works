#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,index;
	
	int dizi[] = {2, 1, 3, 5, 7, 8, 12, 34, 19, 11, 6, 2, 8};
	
	int eleman = (sizeof dizi / sizeof *dizi); 
   
  	for(i=0; i<=eleman; i++){
  		if(i != eleman-2){
  			printf("%d  ",dizi[i]);
		}
	  }
	
	return 0;
}
