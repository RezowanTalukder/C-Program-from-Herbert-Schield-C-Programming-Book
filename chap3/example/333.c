#include<stdio.h>
int main()
{
	char ch ;
	for(ch=getchar() ;ch!='q' ;ch=getchar()){
			printf("didnt match..press again..\n") ;
	}
	printf("found !!\n") ;
	return 0 ;
}
