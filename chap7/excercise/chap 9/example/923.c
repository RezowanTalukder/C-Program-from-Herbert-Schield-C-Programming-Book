#include<stdio.h>
int main()
{
	FILE *fp ;
	int a,b;
	fp=fopen("h.txt","r") ;
	fscanf(fp,"%d",&a) ;
	fscanf(fp,"%d",&b) ;
	printf("%d\n",a+b) ;
	FILE *f ;
	f=fopen("x.txt","w") ;
	fprintf(f,"%d",a+b) ;
	fcloseall() ;
	return 0 ;
}
