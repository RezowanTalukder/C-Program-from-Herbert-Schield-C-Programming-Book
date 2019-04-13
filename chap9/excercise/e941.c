#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE *fp ;
	char num[100] , str[50][50] ;
	int i  ;
	if((fp=fopen(argv[1],"r"))==NULL){
		printf("file open failed\n") ;
		exit(1) ;
	}
	for(i=0 ;!feof(fp) ;i++){
		fscanf(fp,"%s",str[i]) ;
		fscanf(fp,"%s",num[i]) ;
	}
	char s[100] ;
	printf(" name:");
	scanf("%s",s) ;
	for(i=0 ;!feof(fp) ;i++){
		if(!strcmp(s,str[i])){
			printf("%s\n",num[i]) ;
		}
	}
	fclose(fp) ;
	printf("sucessfull\n") ;
	return 0 ;
}
