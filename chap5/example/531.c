#include<stdio.h>
int main()
{
	int bball[3][3] ;
	int i,j ;
	for(i=0 ;i<3 ;i++){
		for(j=0 ;j<3 ;j++){
			printf("quarter %d ,player %d\n",i+1,j+1) ;
			printf("enter number of points:") ;
			scanf("%d",&bball[i][j]) ;
		}
	}
	for(i=0 ;i<3 ;i++){
		for(j=0 ;j<3 ;j++){
			printf("quarter %d ,player %d\n",i+1,j+1) ;
			printf("points:%d\n",bball[i][j]) ;
			
		}
	}
	return 0 ;
}
