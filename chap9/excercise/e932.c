#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *f1,*f2,*fp ;
	char ch ;
	if((f1=fopen(argv[1],"r+"))==NULL){
		printf("f1 file open failed\n") ;
		exit(1) ;
	}
	
	if((f2=fopen(argv[2],"r+"))==NULL){
		printf("f2 file open failed\n") ;
		exit(1) ;
	}
	
	if((fp=fopen("hello.txt","r+"))==NULL){
		printf("hello file open failed\n") ;
		exit(1) ;
	}
	while(!feof(f1)){
		ch=fgetc(f1) ;
		if(ferror(f1)){
			printf("error in f1\n") ;
			exit(1) ;
		}
		fputc(ch,fp) ;
	}
	while(!feof(f2)){
		ch=fgetc(f2) ;
		if(ferror(f2)){
			printf("fp file error\n") ;
			exit(1) ;
		}
		fputc(ch,f1) ;
	}
	while(!feof(fp)){
		ch=fgetc(fp) ;
		if(ferror(fp)){
			printf("fp file error\n") ;
			exit(1) ;
		}
		fputc(ch,f2) ;
	}
	fcloseall() ;
	printf("sucessfull\n") ;
	return 0 ;
}






