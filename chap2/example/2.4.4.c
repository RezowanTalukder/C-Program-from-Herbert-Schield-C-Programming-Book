#include <stdio.h>

int main(){
	
	int n,i,s;
	
	printf("Enter the number to test: ");
	scanf("%d",&n);
	
	s=1;
	
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			s=0;
	if(s==1)
		printf("The number is prime.");
	else
		printf("The number is not prime.");

	return 0;
}
