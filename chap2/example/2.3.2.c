#include <stdio.h>

int main(){
	
	int a;
	
	printf("What is 10+14?");
	scanf("%d",&a);
	
	if(a==10+14)
		printf("Right!!");
	else{
		printf("Sorry, you're wrong.");
		printf("The number is 24.");	
	
	}
	
	return 0;
}
