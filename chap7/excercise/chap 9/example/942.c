#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fp1,*fp2 ;
	char str[50][50] ;
	if((fp1=fopen(argv[1],"r"))==NULL){
		printf("file open failed\n") ;
		exit(1) ;
	}
	if((fp2=fopen(argv[2],"w"))==NULL){
		printf("file open failed\n") ;
		exit(1) ;
	}
	int i=0 ;
	char num[30][30] ;
	do{
		fgets(str[i],50,fp1) ;
		fgets(num[i],30,fp1) ;
		if(!feof(fp1)){
			fputs(str[i],fp2) ;
		}
		if(!feof(fp1)){
			fputs(str[i],fp2) ;
		}
		
	}
	while(!feof(fp1)) ;
	fcloseall() ;
	printf("sucessfull\n") ;
	return 0 ;
}
