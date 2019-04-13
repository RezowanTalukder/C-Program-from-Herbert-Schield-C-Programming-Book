#include<stdio.h>
int main()
{
	int i,j ;
	scanf("%d",&j) ;
	for(i=2 ;i<=j/2 ;i++){
		if(j%i==0){
				printf("%d\n",i) ;
		}
	}
	return 0 ;
}
