#include<stdio.h>
int main()
{
	char ch ;
	printf("enter character:") ;
	ch=getchar() ;
	while(ch!='\r'){
		printf("%c",ch-32);
		ch=getchar() ;
	}
	return 0;
}
