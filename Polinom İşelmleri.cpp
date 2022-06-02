#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define MAX 17
typedef struct node{
	int coeff;
	struct node *next;
}my_poly;

my_poly *  init();
void read(my_poly *h1);
void printT(my_poly *h1);
void printC(my_poly *h1);
my_poly * add(my_poly *h1,my_poly *h2);
my_poly * multiply(my_poly *h1,my_poly *h2);

int main(){
	node *h1=NULL,*h2=NULL,*h3=NULL,*h4=NULL;
	int option;
	do
	{
		printf("\n1 : 1.polinomu ekleme\n");
		printf("2 : 2. ve daha fazla polinomu ekleme\n");
		printf("3 : Toplama islemi\n");
		printf("4 : Carpma islemi\n");
		printf("5 : Cikis\n");
		printf("\n YAPMAK ISTEDIGINIZ ISLEMI SECINIZ:  ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:h1=init();read(h1);break;
			case 2:h2=init();read(h2);break;
			case 3:h3=add(h1,h2);
      			printf("\n1.Polinomunuz ->  ");
      			printT(h1);
      			printf("\n2.Polinomunuz ->  ");
     			printT(h2);
      			printf("\nyeni polinomunuz= ");
      			printT(h3);
      			break;
			case 4:h4=multiply(h1,h2);
      			printf("\n1.Polinomunuz -> ");
     			printC(h1);
      			printf("\n2.Polinomunuz -> ");
    		  	printC(h2);
      			printf("\nyeni polinomunuz = ");
      			printC(h4);
      			break;
		}
	}while(option!=5);
}

void  read(my_poly *h){
	int n,i,j,power,coeff;
	node *p;
	p=init();
	printf("\n Ekleyeceginiz terim sayisini giriniz: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){       
		printf("\n %d.Teriminiz icin:\n",i+1);
		printf("us: ");
		scanf("%d",&power);
		printf("katsayi: ");
		scanf("%d",&coeff);
			for(p=h,j=0;j<power;j++)
   				p=p->next;
				p->coeff=coeff;
	}
}
void printT(my_poly *p){
   int i;
	for(i=0;p!=NULL;i++,p=p->next)
		if(p->coeff!=0)
			printf("+ %dx^%d   ",p->coeff,i);
}

void printC(my_poly *p){
   int i;
	for(i=0;p!=NULL;i++,p=p->next)
		if(p->coeff!=0)
			printf("* %dx^%d  ",p->coeff,i);
}

my_poly * add(my_poly *h1, my_poly *h2){
    my_poly *h3,*p;
    h3=init();
    p=h3;
    while(h1!=NULL){
		h3->coeff=h1->coeff+h2->coeff;
		h1=h1->next;
		h2=h2->next;
		h3=h3->next;
	}
return(p);
}

my_poly * multiply(my_poly *h1, my_poly *h2){
	my_poly *h4,*p,*q,*r;
	int i,j,k,coeff,power;
	h4=init();
		for(p=h1,i=0;p!=NULL;p=p->next,i++)
		{
			for(q=h2,j=0;q!=NULL;q=q->next,j++)
   			{
				coeff=(p->coeff) * (q->coeff);
				power=i+j;
				for(r=h4,k=0;k<power;k++)
				{
					r=r->next;
					r->coeff = r->coeff+coeff;
				}
    		}
    	}
return(h4);
}

my_poly * init(){
    int i;
    my_poly *h=NULL,*p;
    for(i=0;i<MAX;i++)
	{
		p=(my_poly *) malloc(sizeof(my_poly));
		p->next=h;
		p->coeff=0;
		h=p;
	}
return(h);
}
