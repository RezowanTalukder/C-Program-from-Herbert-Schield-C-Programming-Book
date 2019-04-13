#include <stdio.h>

int main(){
	
	float n;
	int c;
	
	printf("Enter: ");
	scanf("%f",&n);
	
	printf("1:Feet to meter ,2: meter to feet.");
	printf("Enter choice: ");
	scanf("%d",&c);
	
	if(c == 1)
		printf("%f",n/3.28);
	if(c == 2)
		printf("%f",n*3.28);

	return 0;
}
