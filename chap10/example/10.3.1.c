#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

int menu(void);
void enter(void);
void find(void);
void save(void);
void load(void);

struct address{
	char street[40];
	char city[40];
	char state[3];
	char zip[12];
};
struct phone_type{
	char name[40];
	int areacode;
	char number[9];
	struct address addr;
	
}phone[MAX];

int loc;

int main(void)
{
	int choice;
	
	do{
		choice=menu();
		
		switch(choice){
			case 1:enter();
				break;
			case 2:find();
				break;	
			case 3:save();
				break;
			case 4:load();	
		}
	}while(choice!=5);

	return 0;
}
int menu(void)
{
	int i;
	char str[80];
	
	printf(" 1.Enter names and numbers\n");
	printf(" 2.Find numbers\n");
	printf(" 3.Save directory to the disk \n");
	printf(" 4.Load directory from the disk\n");
	printf(" 5.Quit\n");
	
	do{
		printf("Choose your selection: ");
		gets(str);
		i=atoi(str);
		printf("\n");
	}while(i<1 || i>5);
	
	return i;
}

void enter(void)
{
	char temp[80];
	
	for(;loc<100;i++){
		if(loc<100){
			printf("Enter name: ");
			gets(phone[loc].name);
		
			if(!*phone[loc])break;
		
			printf("Enter area code: ");
			gets(temp);
			phone[loc].areacode=atoi(temp);
		
			printf("Enter number: ");
			gets(phone[loc].number);
		
			printf("Enter street address: ");
			gets(phone[loc].addr.street);
		
			printf("Enter city: ");
			gets(phone[loc].addr.city);
		
			printf("Enter state: ");
			gets(phone[loc].addr.state);
		
			printf("Enter zip code: ");
			gets(phone[loc].addr.zip);
		}
	}
}

void find(void)
{
	char name[80];
	int i;
	
	printf("Enter Name: ");
	gets(name);

	if(!*name) return ;
	
	for(i=0;i<100;i++){
		if(!strcmp(name,cat[i].name)){
		
			if(!strcmp(name,phone[i].name)){
			printf("Name:%s\n Area code: %d\n Phone number: %s\n",phone[i].name,phone[i].areacode,
				phone[i].number);
			printf(" Street: %s\n City: %s\n State: %s\n Zip: %s\n\n",phone[i].addr.street,
			phone[i].addr.city,phone[i].addr.state,phone[i].addr.zip);
		}
	}
}



void load (void)
{
	FILE *fp;
	if((fp=fopen("phone","rb"))==NULL){
		printf("Cannot open file.\n");
		exit(1) ;
	}
	
	loc=0
	while(!feof(fp)){
		fread(&phone[loc],sizeof phone[loc],1,fp);
		loc++;
	}
	
	fclose(fp);
}

void save (void)
{
	FILE *fp;
	
	if((fp=fopen("phone","wb"))==NULL){
		printf("Cannot open file.\n");
		exit(1) ;
	}
	for(i=0;i<loc;i++)
		fwrite(&phone[loc],sizeof phone[loc],1,fp);
	}
	fclose(fp);
}
