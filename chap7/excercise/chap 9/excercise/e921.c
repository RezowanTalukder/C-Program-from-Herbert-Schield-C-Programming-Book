#include<stdio.h>
int main(int argc,int *argv[])
{
	int i=1 ;
	for( ; argv[i] ;i++){
		printf("%s ",argv[i] ) ;
	}
	return 0 ; 
}
