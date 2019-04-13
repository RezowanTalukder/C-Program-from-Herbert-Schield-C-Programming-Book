#include<stdio.h>
int main()
{
	int n ;
	while(1){
		scanf("%d",&n) ;
		if(n<0)printf("negative\n") ;
		else if (n>0)printf("positive\n") ;
		else printf("zero\n") ;
	}
	return 0 ;
}
