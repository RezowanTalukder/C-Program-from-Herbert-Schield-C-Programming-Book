#include <stdio.h>

int main(){
	
	float n;
	int c;
	
	printf("1:feet to meter, 2:meter to feet. ");
	printf("Enter choice: ");
	scanf("%d",&c);
	
	if(c==1){
		printf("Enter number of feet: ");
		scanf("%f",&n);
		printf("Meter: %f",n/3.28);
	}
	else{
		printf("Enter number of meters: ");
		scanf("%f", &n);
		printf("Feet: %f",n*3.28);
	}

	return 0;
}
