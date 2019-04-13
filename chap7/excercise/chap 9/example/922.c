#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fp ;
	char ch[100] ;
	if(argc!=3){
		printf("Fault\ntry again\n") ;
		exit(1) ;
	}
	if((fp=fopen(argv[1],"r+"))==NULL){
		printf("File open fail\n");
		exit(1) ;
	}
	fprintf(fp,"hello bangladesh") ;
	fscanf(fp,"%s",ch) ;
	if(!strcmp(ch,argv[2])){
		printf("Found\n") ;
		}
	fclose(fp) ;
	return 0 ;
}
