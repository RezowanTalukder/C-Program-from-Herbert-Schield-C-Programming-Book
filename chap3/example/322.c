#include<stdio.h>
int main(){

	int ans, count;
	int again;
	
	for(count=1;count<11;count++){
		printf("what is %d + %d ?",count,count);
		scanf("%d",&ans);
		
		if (ans == count + count)
			printf("right!\n");
			
		else {
			printf("sorry you are wrong");
			printf("Try again\n");
			
			printf("what is %d + %d ?",count,count);
		    scanf("%d",&ans);
		    
		    if(ans == count + count)
		    	printf("Right!");
		    else
		    	printf("Wrong, the answer is %d \n",count+count);
		    	
		 }
	}
	
	return 0;
}		    	
		    
			
				
		
