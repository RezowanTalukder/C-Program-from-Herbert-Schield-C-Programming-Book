#include<stdio.h>
int main()
{
	int i ;
	for(i=21 ;i<100;){
		printf("%d\n",i) ;
		i=(i*1468)%467 ;
	}
	return 0 ;
}
