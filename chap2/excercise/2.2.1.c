#include <stdio.h>
int fun(char x,int y,int z);
int main(){
	
	int y,z;
	char x;
	printf("Enter '+' or '*' for add or pro\n");
	scanf("%c",&x);
	printf("Enter 2 numbers for operation\n");
	scanf("%d%d",&y,&z);
	printf("Result is %d\n",fun(x,y,z));
	
	return 0;
}
int fun(char x,int y,int z){
	
	int a;
	if(x=='+'){
		a=y+z;
		return a;
	}	
	else if(x=='*'){
		a=y*z;
		return a;
	}
	return 0;
}
