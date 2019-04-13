#include<stdio.h>
int main()
{
	int *ip,p;
	char *cp,c ;
	float *fp,f ;
	double *dp,d ;
	printf("1st step:\n") ;
	printf("%p\n%p\n%p\n%p\n",ip,cp,fp,dp) ;
	cp=&c ;
	fp=&f ;
	ip=&p ;
	dp=&d ;
	printf("2nd step:\n") ;
	printf("%p\n%p\n%p\n%p\n",ip,cp,fp,dp) ;
	cp++ ;
	ip++ ;
	fp++ ;
	dp++ ;
	printf("3st step:\n") ;
	printf("%p\n%p\n%p\n%p\n",ip,cp,fp,dp) ;
}
