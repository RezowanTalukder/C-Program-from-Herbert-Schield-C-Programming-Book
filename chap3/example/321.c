#include<stdio.h>
int main(){
	
	int a,b;
	char ch;
	
	printf("do you want to :\n");
	printf("Add,Substract,Multiply, or Divide?\n");
	printf("enter frst ltr :");
	ch = getchar();
	printf("\n");
	
	printf("enter frst number :");
	scanf("%d",&a);
	printf("enter scnd number :");
	scanf("%d",&b);
	
	else if(ch=='A') printf("%d\n",a+b);
	else if(ch=='S') printf("%d\n",a-b);
	else if(ch=='M') printf("%d\n",a*b);
	else if(ch=='D' && b!=0) printf("%d\n",a/b);
	
	return 0;
	
}	
