#include<stdio.h>
int main(){

	char ch;
	
	do{
		printf("enter a char,q to quit:");
		ch=getchar();
		printf("\n");
		
		switch(ch){
		
			case 'a':
				printf("now is");
			case  'b':
				printf("the time");
			case 'c':
				printf("for all good men");
			case 'd':
				printf("the summer");
			case 'e':
				printf("soldier");
		}
	}while(ch!='q');
	
	return 0;
}
