#include<stdio.h>
int main()
{
	FILE *fp="in.txt" ,*f ;
	int a,b ;
	 fp=fopen("in.txt","w") ;
	 f=fopen("out.txt","r") ;
	 fscanf(f,"%d",&a) ;
	 fscanf(f,"%d",&b) ;
	 fprintf(fp,"%d",a+b) ;
	 return 0 ;
}
