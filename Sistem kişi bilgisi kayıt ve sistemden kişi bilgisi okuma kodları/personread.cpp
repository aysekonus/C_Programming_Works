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
void Display(struct Person X)
{
	char c;
	printf("Person ID:%d\n",X.ID);
	printf("Person Name:%s\n",X.name);
	printf("Person Surname:%s\n",X.surname);
	printf("Birthdate: %d/%d/%d\n",X.bdate.day,X.bdate.month,X.bdate.year);
	printf("Salary:%f",X.salary);
	return;
}
int main()
{
	FILE *fp;
	int k,i;
	struct Person A;
	fp=fopen("person.bin","r+");
	if(fp==NULL) fp=fopen("person.bin","w+");
	fseek(fp,0,SEEK_END);
	k=ftell(fp)/sizeof(struct Person);
	printf("The number of records is %d",k);
	fseek(fp,0,SEEK_SET);
	for(i=0;i<k;i++)
	{
		fread(&A,sizeof(struct Person),1,fp);
		if(feof(fp)) break;
		Display(A);
	}
	fclose(fp);
	return 0;
}
