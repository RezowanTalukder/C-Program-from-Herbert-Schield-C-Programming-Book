#include<stdio.h>
int main()
{
	int ar[10],i,esum=0 ,osum=0 ;
	for(i=0 ;i<10 ;i++){
		scanf("%d",&ar[i]) ;
		if(ar[i]%2==0)esum+=ar[i] ;
		else{osum+=ar[i];}
	}
	printf("even number sum=%d\nodd number sum=%d\n",esum,osum) ;
	return 0 ;
}
