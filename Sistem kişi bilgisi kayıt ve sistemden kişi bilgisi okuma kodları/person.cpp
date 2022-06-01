#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct Date
{
	int day;
	int month;
	int year;
};
struct Person
{
	int ID;
	char name[30];
	char surname[20];
	struct Date bdate;
	float salary;
};
void ReadbyKeyboard(struct Person *X)
{
	char c;
	printf("Enter Person ID:");
	scanf("%d",&X->ID);
	c=getchar();
	printf("Enter Person Name:");
	fgets(X->name,80,stdin);
	printf("Enter Person Surname:");
	fgets(X->surname,80,stdin);
	printf("Enter the birthdate: ");
	scanf("%d/%d/%d",&X->bdate.day,&X->bdate.month,&X->bdate.year);
	printf("Enter Salary:");
	scanf("%f",&X->salary);
}
int main()
{
	FILE *fp;
	struct Person A;
	fp=fopen("person.bin","r+");
	if(fp==NULL) fp=fopen("person.bin","w+");
	ReadbyKeyboard(&A);
	fseek(fp,0,SEEK_END);
	fwrite(&A,sizeof(struct Person),1,fp);
	fclose(fp);
	return 0;
}


