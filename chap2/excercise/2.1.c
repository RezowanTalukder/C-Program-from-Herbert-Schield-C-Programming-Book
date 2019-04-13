#include <stdio.h>

int main(){
	
	int a,s,i;
	
	a=59;
	
	for(i=1;i<11;i++){
	
		printf("Enter a number: ");
		scanf("%d",&s);
		
		if(s==a){
			printf("Right!\n");
			printf("It took you  %d try(s)",i);
			return 0;
		}
		else if(s<a)
			printf("Your number is smaller.\n");
		else
			printf("Your number is greater.\n");
	
	}
	
	if(i==11)
		printf("Game over.The number was %d\n",a);

	return 0;
}
