#include<stdio.h>
#include<string.h>
int main(int argc,int *argv[])
{
	char str[]="rezowan" ;
	if(!strcmp(argv[1],str))printf("Access granted\n") ;
	else printf("Access denied\n") ;
	return 0 ;
}
