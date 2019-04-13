#include<stdio.h>

int main(void){

	int i,arr[10],j,dupli;

	for(i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	for(i=0; i<10; i++){
		dupli=arr[i];
		for(j=i+1; j<10; j++){
			if(dupli==arr[j]){
				printf("%d is duplicated\n",dupli);
				 
			}	
		}
	}
	
				
	return 0;				
}
