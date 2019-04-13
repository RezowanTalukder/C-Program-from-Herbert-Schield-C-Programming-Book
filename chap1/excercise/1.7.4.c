#include<stdio.h>
int main()
{
	int ans,i,j ;
	
	for(i=3; ;i++){
		printf("what is %d + %d=",i*5,i*3);
		scanf("%d",&ans) ;
		if((i*5+i*3)==ans){
			printf("RIGHT\n") ;
		}
		else{ printf("wrong!!\ndo again:");
		for(j=0 ;j<3 ;j++){
			scanf("%d",&ans) ;
			if((i*5+i*3)==ans){
			printf("RIGHT\n") ;
			break ;
		}
		}
		
	}
	
	}
	return 0 ;
}
