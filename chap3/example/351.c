#include<stdio.h>
int main(){

	int a,b;
	char ch;	
	printf("do you want to add,subtract,multiply or divide:\n ");
	
	do{
		printf("enter your choice:");
		ch=getchar();
		}while(ch!='a' && ch!='s' && ch!='m' && ch!='d');
	
	printf("enter the two numbers:\n");
	scanf("%d %d",&a,&b);
	
	if(ch=='a') printf("%d\n",a+b);
	if(ch=='s') printf("%d\n",a-b);
	if(ch=='m') printf("%d\n",a*b);
	if(ch=='d') printf("%d\n",a/b);
	
	return 0;
}
