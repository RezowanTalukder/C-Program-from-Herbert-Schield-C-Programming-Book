#include <stdio.h>

int main(){
		
	int n;
	
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	if(n<0)
		printf("Number is negative.");
	else
		printf("Number is non-negative.");

	return 0;
}
