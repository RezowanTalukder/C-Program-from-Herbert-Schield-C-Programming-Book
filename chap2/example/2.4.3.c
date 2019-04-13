#include <stdio.h>

int main(){
	
	int a,c;
	
	for(c=1;c<11;c++){
		printf("What is %d + %d?",c,c);
		scanf("%d",&a);
		
		if(a == c+c)
			printf("Right!!");
		else{
		
			printf("Sorry , you're wrong.");
			printf("The answer is %d",c+c);
		}
	
	}

	return 0;
}
