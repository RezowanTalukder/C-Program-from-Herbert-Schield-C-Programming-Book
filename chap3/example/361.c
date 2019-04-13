#include<stdio.h>
int main(){
	
	int answer,count,chance,right;
	
	for(count=1;count<11;count++){
		
		printf("what is %d+%d\n",count,count);
		scanf("%d",&answer);
		
		if(answer==count+count) printf("RIGHT!");
		
		else{
		
			printf("wrong.\ni,");
			printf("try again.");
			right=0;
			
			for(chance=1;chance<=3;chance++){
			
				printf("what is %d+%d\n",count,count);
				scanf("%d",&answer);
				if(answer==count+count){
				 
					right=1;	
					printf("RIGHT!!!");
				}
			}
			if(right==0) printf("you are a loser.\n");
		}
	}
	
	return 0;
}
			
