#include<stdio.h>
int main()
{
	int *p,q ;
	p=&q ;
	q=1 ;
	printf("%p\n",p) ;
	
	printf("%d\n%d\n%p\n",q,*p,p) ;
	(*p)++ ;
	printf("%d\n%d\n%p\n",q,*p,p) ;
	return 0 ;
}
