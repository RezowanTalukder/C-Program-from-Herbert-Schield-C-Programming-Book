#include <stdio.h>

int xor(int a,int b);

int main(){
	
	int p,q;
	
	printf("Enter p (0 or 1): ");
	scanf("%d",&p);
	printf("Enter q (0 or 1): ");
	scanf("%d",&q);
	printf("P and Q: %d\n",p&&q);
	printf("P or Q: %d\n",p||q);
	printf("P xor Q: %d\n",xor(p,q));

	return 0;
}
int xor(int a,int b){

	return (a||b)&&!(a&&b);
}
