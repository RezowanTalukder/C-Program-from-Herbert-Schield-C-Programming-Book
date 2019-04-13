#include<stdio.h>
int main()
{
	char ch ;
	printf("enter decoded massage for 3 \n") ;
	scanf("%c",&ch) ;
	while(ch!='\r'){
		printf("%c",ch-2) ;
		scanf("%c",&ch) ;
	}
	return 0 ;
}
