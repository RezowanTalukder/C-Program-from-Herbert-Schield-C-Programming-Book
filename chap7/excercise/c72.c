#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello_bangladesh" ;
	char *ch ;
	ch=&str ;
	string_up(ch) ;
	return 0 ;
}
void string_up(char *x){
	int i ;
	while(*x){
		printf("%c",toupper(*x++)) ;
	}
	printf("\n") ;
}
