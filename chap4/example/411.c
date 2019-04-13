#include<stdio.h>
int main()
{
	unsigned u ;
	long l ;
	short s ;
	printf("enter an unsigned number :") ;
	scanf("%u",&u) ;
	printf("enter a long number : ") ;
	scanf("%ld",&l) ;
	printf("enter  a short integer number : ") ;
	scanf("%hd",&s) ;
	
	printf("%u\t%ld\t%hd\n",u,l,s) ;
	return 0 ;
}
