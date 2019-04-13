#include<stdio.h>
int main()
{
	char ch ;
	ch=getchar() ;
	while(ch!='q'){
		printf("press again!!\n") ;
		ch=getchar() ;
	}
	printf("found !!\n") ;
	return 0 ;
}
