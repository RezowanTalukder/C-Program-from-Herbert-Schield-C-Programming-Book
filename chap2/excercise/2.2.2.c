#include <stdio.h>
int EvenOrOdd(int x);
int main(){
	
	int x;
	printf("Enter number\n");
	scanf("%d",&x);
	EvenOrOdd(x);
	
	return 0;
}
int EvenOrOdd(int x){
	if(x%2!=0) printf("Odd\n");
	if(x%2==0) printf("Even\n");
	return 0;
	
}
