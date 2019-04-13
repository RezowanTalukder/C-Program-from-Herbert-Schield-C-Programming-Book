#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,int *argv[])
{
	FILE *fps,*fpd ;
	char str[100] ;
	if((fps=fopen(argv[1],"r"))==NULL){
		printf("source file open fail\n") ;
		exit(1) ;
	}
	fgets(str,100,fps) ;
	fscanf(fps,"%s",str) ;
	if((fpd=fopen(argv[2],"w"))==NULL){
		printf("destination file open fail\n") ;
		exit(1) ;
	}
	fprintf(fpd,"%s",str) ;
	fcloseall() ;
	return 0 ;
}
