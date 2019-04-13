#include<stdio.h>
void circle(float r) ;
void triangle(int b,int h) ;
int main()
{
	int x,y,z ,g;
	printf("circle=1\ntriangle=2\n") ;
	scanf("%d",&g) ;
	if(g==1)circle(10.45) ;
	if(g==2)triangle(13,25) ;
	return 0 ;
}
void circle(float r)
{
	printf("%f",3.1416*r*r) ;
}
void triangle(int b,int h)
{
	printf("%f",.5*b*h) ;
}
