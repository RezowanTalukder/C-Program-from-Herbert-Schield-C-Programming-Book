#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	double ounce ;
	ounce=atof(argv[1])/16.0 ;
	printf("%f\n",ounce) ;
	return 0 ;
}
