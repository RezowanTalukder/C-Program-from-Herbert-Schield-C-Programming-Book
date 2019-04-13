#include <stdio.h>

int main(){
	
	int n,m;
	
	printf("Enter 1st number: ");
	scanf("%d",&n);
	
	printf("Enter 2nd number: ");
	scanf("%d",&m);
	
	if (!(m))
		printf("Can not devide by zero");
	else
		printf("The result is %d",n/m);

	return 0;
}
