#include<stdio.h>
#define MAX 10
#define COUNTBY 0
int main()
{
	int i ,sum = 0 ;
	for(i=COUNTBY ;i<MAX-1 ;i++){
		sum+=i ;
	}
	printf("%d\n",sum) ;
	return 0 ;
}
