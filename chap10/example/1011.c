#include<stdio.h>
int main()
{
	struct s_type{
		int i ;
		char ch ;
		double d ;
		char str[40] ;
	}s ;
	printf("enter an integer ,a char,a double and a string:") ;
	scanf("%d%c%lf%s",&s.i,&s.ch,&s.d,s.str) ;
	printf("%d\n%c\n%lf\n%s\n",s.i,s.ch,s.d,s.str) ;
	return 0 ;
}
