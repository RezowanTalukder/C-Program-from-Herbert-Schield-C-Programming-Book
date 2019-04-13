#include<stdio.h>

int main(void)
{
	float item[100],temp;
	int count,a,b;
	
	printf("How many numbers do u want?\n");
	scanf("%d",&count);
	
	for(a=0; a<count; a++){
		scanf("%f",&item[a]);
	}
	for(a=1;a<count;a++){
		for(b=count-1; b>=a ;b--){
			if(item[b-1]>item[b]){
				temp=item[b-1];
				item[b-1]=item[b];
				item[b]=temp;
			}
		}
	}
	for(a=0; a<count; a++){
		printf("%f ",item[a]);
	}

	return 0;
}
