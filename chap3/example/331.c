#include<stdio.h>
int main()
{
	int i ;
	char ch ;
	for(i=0;i<10;i=i+1){
		printf("pass:%d\n",i) ;
		ch=getchar() ;
	}
	return 0 ;
}
