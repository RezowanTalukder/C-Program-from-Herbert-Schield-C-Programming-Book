#include<stdio.h>
int main(){

	char ch;
	printf("enter the letter:");
	ch=getchar();
	
	switch(ch){
	
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'y':
		
			printf(" is a vowel\n");
			break;
			
		default:
			printf(" is a consonent.\n");
	}
	
	return 0;
}
		
