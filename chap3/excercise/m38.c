#include<stdio.h>
int main()
{
	int i ;
	hello :
	for(;;i++){
		printf("%d\n",i) ;
		if(i==45)break ;
	}
	goto hello ;
	return 0 ;
}
