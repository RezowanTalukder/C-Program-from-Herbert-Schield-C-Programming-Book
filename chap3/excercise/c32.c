#include<stdio.h>
int main()
{
	int i,j,k ;
	for(i=0 ;;i++){
		printf("enter first number:") ;
		scanf("%d",&i) ;
		printf("enter second number :") ;
		scanf("%d",&j) ;
		if(j!=0)printf("%d\n",i/j) ;
		else printf("infinite\n") ;
	}
	return 0 ;
}
