#include<stdio.h>
int main()
{
	int num[20] ;
	int i,j,count=0,c=0,temp ;
	for(i=0 ; ;i++){
		scanf("%d",&num[i]) ;
		if(num[i]==0)break ;
		count+=1 ;
	}
	for(i=0 ;i<count ;i++){
		for(j=1+i ;j<count ;j++){
			if(num[i]>num[j]){
				temp=num[i] ;
				num[i]=num[j] ;
				num[j]=temp ;
				c+=1 ;
			}
		}
	}
	printf("Sorted array:\n") ;
	for(i=0 ;i<count ;i++){
		printf("%d\n",num[i]) ;
	}
	printf("total swaping: %d times\n",c) ;
	return 0 ;
}
