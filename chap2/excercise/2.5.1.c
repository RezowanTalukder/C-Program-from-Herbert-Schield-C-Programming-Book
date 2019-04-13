#include <stdio.h>

int main(){
	
	int x,i,p;
	
	printf("Enter the number to test: ");
	scanf("%d",&x);
	
	p=1;
	for(i=2;i<=x/2;i=i+1)
		if(x%i==0){
			printf("%d\n",i);
			p=0;
		}
	if(p==1)printf("The factors are 1 & %d\n",x);
		
	return 0;
}
