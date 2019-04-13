#include<stdio.h>
int main()
{
	int l,w,n ,i ,count=0 ;
	printf("number of rooms:") ;
	scanf("%d",&n) ;
	for(i=0 ;i<n ;i++){
		printf("room:%d\n\n",i+1) ;
		printf("lenth:") ;
		scanf("%d",&l) ;
		printf("width:");
		scanf("%d",&w) ;
		count+=(l*w) ;
	}
	printf("total square foot:%d",count) ;
	return 0 ;
	
}
