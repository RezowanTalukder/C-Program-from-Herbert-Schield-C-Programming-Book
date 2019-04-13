#include<stdio.h>
int main()
{
	int s[20] ,i,j ,count=0 ;
	int oc=0,om=0,m ;
	printf("enter 20 numbers:") ;
	for(i=0 ;i<20 ;i++){
		scanf("%d",&s[i]); 
	}
	for(i=0 ;i<20 ;i++){
		m=s[i] ;
		count=1 ;
		for(j=i+1 ;j<20 ;j++){
			if(m==s[j])count++ ;
		}
		if(count>oc){
			om=m ;
			oc=count ;
		}
	}
	printf("the mode id %d\n",m) ;
	printf("mode appears %d times\n",oc) ;
	return 0 ;
}
