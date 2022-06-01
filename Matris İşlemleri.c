#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// MATRÝS //

int main(int argc, char *argv[]) {
	
	int matris[2][2];
	int i,j;
	int toplam=0;
	char islem;
	
	printf("2x2'lik bir matris olusturunuz:");
	
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	printf("matrisiniz uzerinde yapacaginiz islemi seciniz:\n");
	printf("satir toplamini bulmak icin 1'e basiniz\nsutun toplamini bulmak icin 2'ye basiniz:\n");
	scanf("%d",&islem);	
	
	switch(islem) {	
		case 1: {
		for(i=0;i<2;i++) {
			for(j=0;j<2;j++) {
				toplam=toplam+matris[i][j];
		}
				printf("%d ",toplam);
				toplam=0;
	}	
		
			break;
    }
		case 2: {
			for(j=0;j<2;j++) {
				for(i=0;i<2;i++) {
					toplam=toplam+matris[i][j];
		}
		printf("%d ",toplam);
				toplam=0;
	}
			break;
		}
		
}

	

	
	
	
	return 0;
}
