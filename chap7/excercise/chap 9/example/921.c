#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp ;
	char str[]="rezowan_the_Boss" ;
	char *p ;
	if((fp=fopen("1.txt","w"))==NULL){
		printf("File open failed\n") ;
		exit(1) ;
	}
	p=str ;
	while(*p){
		if(fputc(*p,fp)==EOF){
			printf("Error writting file\n") ;
			exit(1) ;
			}
		*p++ ;
	}
	fclose(fp) ;
	FILE *fpr ;
	char s[100] ;
	if((fpr=fopen("1.txt","r"))==NULL){
		printf("reding file error\n") ;
		exit(1) ;
	}
	fscanf(fpr,"%s",s) ;
	printf("%s",s) ;
	return 0 ;
}
