#include<stdio.h>
int main()
{
	int i ;
	for(i=1 ;i<=10 ;i++)printf("%d\t",i) ;
	while(i>0){printf("%d\t",i) ;i-- ;}
	i=10 ;
	do{printf("%d\t",i) ;i--;}
	while(i>0) ;
	return 0 ;
}
