#include<stdio.h>
int main()
{
	struct {
		int i ;
		int j ;
	}s ;
	int i=1,j=2 ;
	s.i=10 ;
	s.j=20 ;
	printf("%d %d %d %d\n",i,j,s.i,s.j) ;
	return 0 ;
}
