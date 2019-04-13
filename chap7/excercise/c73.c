#include<stdio.h>
int main(int argc,char *argv[])
{
	int argv[1][8]={10,34,65,7,45,2345,65,3} ;
	float avg  ;
	int i,sum =0 ;
	for(i=0 ;i<atoi(argv[2]) ;i++){
		sum+=argv[1][i] ;
	}
	printf("%f",sum/(float)atoi(argv[2])) ;
	return 0 ;
}
