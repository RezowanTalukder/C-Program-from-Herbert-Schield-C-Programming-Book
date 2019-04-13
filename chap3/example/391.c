#include<stdio.h>
int main(){

	int a,b;
	char ch;
		
	printf("do you want to;");
	printf("add,subtract,multiply or divide:\n");
	do{
	
		printf("enter the letter:");
		ch=getchar();
		
	}while(ch!='A' && ch!='S' && ch!='M' && ch!='D');

	printf("enter first num:\n");
	scanf("%d",&a);
	
	printf("enter second num:\n");
	scanf("%d",&b);
	
	switch(ch){
	
		case 'A':
		 
				printf("%d\n",a+b);
				break;
				
		case 'S':
		
				printf("%d\n",a-b);
				break;
				
		case 'M':
		
				printf("%d\n",a*b);
				break;
				
		case 'D':
		
				if(b!=0)
				printf("%d\n",a/b);
				break;
				
		default:
		
				printf("unrecognized command.\n");
				break;
	}
	return 0;
}
