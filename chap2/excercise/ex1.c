#include<stdio.h>
float add(int x,int y);
float minus(int x,int y);
float mult(int x,int y);
float div(int x,int y);
int main()
{
	int num1,num2 ;
	float a,b,c,d ;
	char sym,temp ;
	printf("enter two number:");
	scanf("%d%d",&num1,&num2) ;
	printf("enter symbol") ;
	scanf("%c",&temp) ;
	scanf("%c",&sym) ;
	if(sym=='+'){
		a=add(num1,num2) ;
		printf("sum=%f",a) ;
		
	}
	if(sym=='-'){
		b=minus(num1,num2) ;
		printf("%f",b) ;
		
	}
	if(sym=='*'){
		c=mult(num1,num2) ;
		printf("%f",c) ;
		
	}
	if(sym=='/'){
		b=div(num1,num2) ;
		printf("%f",d) ;
		
	}
	return 0 ;
	
}
float add(int x,int y){
	return x+y ;
}
float minus(int x,int y){
	return x-y ;
}
float mult(int x,int y){
	return x*y ;
}
float div(int x,int y){
	return x/y ;
}




