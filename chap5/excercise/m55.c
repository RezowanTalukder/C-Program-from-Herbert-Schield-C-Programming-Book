#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000] ;
	do{
		gets(s) ;
	}
	while(strcmp(s,"quit")!=0) ;
	return 0 ;
}
