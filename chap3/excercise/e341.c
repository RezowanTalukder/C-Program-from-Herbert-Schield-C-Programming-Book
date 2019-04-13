#include<stdio.h>
int main()
{
	int speed ,time,i,n ;
	scanf("%d",&n) ;
	for(i=1 ;i<=n ;i++){
	printf("enter speed,time\n") ;
	scanf("%d%d",&speed,&time) ;
	printf("%d\n",speed*time) ;
	}
	return 0 ;
}
