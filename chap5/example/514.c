#include<stdio.h>
int main()
{
	int num[100] ;
	int i,j ,temp ,n ;
	printf("enter the number of number: ") ;
	scanf("%d",&n) ;
	for(i=0 ;i<n ;i++){
		scanf("%d",&num[i]) ;
	}
	for(i=0 ;i<n ;i++){
		for(j=i+1 ;j<n ;j++){
			if(num[i]>num[j]){
				temp=num[i] ;
				num[i]=num[j] ;
				num[j]=temp ;
			}
		}
	}
	printf("sorted array:\n") ;
	for(i=0 ;i<n ;i++){
		printf("%d\n",num[i]) ;
	}
	return 0 ;
}
