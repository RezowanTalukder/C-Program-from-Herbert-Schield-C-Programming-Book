#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 2

int menu() ;
int title_search() ;
int author_search() ;
int data_entry() ;

struct catalog{
		char name[30] ;
		char author[50] ;
		char pub[30] ;
		char title[30] ;
		int  date ;
		int edition ;
	}book[MAX] ;
	int top=0 ,choice ;

int main()
{
	
	do{
		choice=menu() ;
		switch(choice){
			case 1:data_entry() ;break; 
			case 2:author_search() ;break ;
			case 3:title_search() ;break ;
			//case 4:save() ;
		}
	}while(choice!=5) ;
	
	
	return 0 ;
}
int menu()
{
	int i ;
	char str[40] ;
	start :
	printf("book catalog\nwhat do you want?\n\n\n") ;
	printf("press 1 for data entry\n") ;
	printf("press 2 for search by aythor\n") ;
	printf("press 3 for search by title\n") ;
	//printf("press 4 for save catalog\n") ;
	printf("press 5 for quit\n") ;
	scanf("%d",&i) ;
	if(i>5||i<1)goto start ;
	else return i ;
}
int data_entry()
{
	int i ;
	for(i=0 ;i<MAX ;i++){
		printf("ENTER BOOK NAME:") ;
		scanf("%s",book[i].name) ;
		printf("ENTER AUTHOR NAME:") ;
		scanf("%s",book[i].author) ;
		printf("ENTER TITLE : ") ;
		scanf("%s",book[i].title) ;
		printf("ENTER PUBLICATION NAME:") ;
		scanf("%s",book[i].pub) ;
		printf("ENTER EDITION:") ;
		scanf("%d",&book[i].edition) ;
		printf("ENTER PUBLISHED DATE:") ;
		scanf("%d",&book[i].date) ;
	}
	top=i ;
	return 1 ;
}
//search by author
int author_search()
{
	char temp[40] ;
	printf("enter the name of author : ") ;
	scanf("%s",temp) ;
	int i ;
	for(i=0 ;i<MAX ;i++){
		if(!strcmp(temp,book[i].author)){
			printf("%s",book[i].name) ;
			printf("\n") ;
		}
	printf("NO MORE RESULT\n") ;
	}
	return 0 ;
}
//search by title
int  title_search()
{
	char temp[40] ;
	int i ;
	for(i=0 ;i<MAX ;i++){
		if(!strcmp(temp,book[i].title)){
			printf("%s",book[i].name) ;
			printf("\n") ;
		}
	}
	printf("NO MORE RESULT FOUND\n") ;
	return 0 ;
}
