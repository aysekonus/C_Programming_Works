#include <stdio.h>

int main()
{
	int amount_money, num_banknotes;


    while(1){
    	printf("The withdrawn Money: ");
		scanf("%d", &amount_money);
		if(amount_money%5==0)
		   break;
		else
		   printf("The money to be withdrawn should be multiple of 5 TL.\n");
	}	
	
	// The number of 200 TL banknotes
	if(amount_money>=200){
		num_banknotes = amount_money / 200;
		amount_money = amount_money - 200*num_banknotes;
		printf("%d --> 200 TL \n", num_banknotes);	
	}
	
	// The number of 100 TL banknotes
	if(amount_money>=100){
		num_banknotes = amount_money / 100;
		amount_money = amount_money - 100*num_banknotes;
		printf("%d --> 100 TL \n", num_banknotes);		
	}
	
	// The number of 50 TL banknotes
	if(amount_money>=50){
		num_banknotes = amount_money / 50;
		amount_money = amount_money - 50*num_banknotes;
		printf("%d --> 50 TL \n", num_banknotes);	
	}
	
	// The number of 20 TL banknotes
	if(amount_money>=20){
		num_banknotes = amount_money / 20;
		amount_money = amount_money - 20*num_banknotes;
		printf("%d --> 20 TL \n", num_banknotes);	
	}
	
	// The number of 10 TL banknotes
	if(amount_money>=10){
		num_banknotes = amount_money / 10;
		amount_money = amount_money - 10*num_banknotes;
		printf("%d --> 10 TL \n", num_banknotes);	
	}
	
	// The number of 5 TL banknotes
	if(amount_money>=5){
		num_banknotes = amount_money / 5;
		amount_money = amount_money - 5*num_banknotes;
		printf("%d --> 5TL \n", num_banknotes);		
	}
 
    return 0;
}
