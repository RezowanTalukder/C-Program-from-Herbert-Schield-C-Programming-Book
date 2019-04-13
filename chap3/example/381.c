#include<stdio.h>
int main(){

	int total=0,i,j;
	
	do{
		printf("enter next number (0 to stop.):\n");
		scanf("%d",&i);
		
		printf("enter number again:\n");
		scanf("%d",&j);
		
		if(i!=j) {
			printf("mismatch.\n");
			continue;
		}
	
		total=total+i;
		
	}while(i);
	
	printf("total:%d",total);
	
	return 0;
}	
