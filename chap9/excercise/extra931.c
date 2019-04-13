#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *from ;
	if((from=fopen("from.txt","r+"))==NULL){
		printf("source file open failed\n") ;
		exit(1) ;
	}
	/*if((to=fopen("to.txt","w"))==NULL){
		printf("destination file open failed\n") ;
		exit(1) ;
	}*/
	while(!feof(from)){
		char ch ;
		ch=fgetc(from) ;
		if(ferror(from)){
			printf("file error in source\n") ;
			exit(1) ;
		}
		fputc(ch,from) ;
		/*if(ferror(to)){
			printf("error in destination\n ") ;
			exit(1) ;
		}*/
	}
	fcloseall() ;
	return 0 ;
}
