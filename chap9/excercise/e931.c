#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fp ;
	int count=0  ;
	char ch ;
	if((fp=fopen(argv[1],"r"))==NULL){
		printf("File open fail\n") ;
		exit(1) ;
	}
	while(!feof(fp)){
		ch=fgetc(fp) ;
		if((ch<95&&ch>65)||(ch<122&&ch>96))count++ ;
	}
	printf("%d\n",count) ;
	fclose(fp) ;
	return 0 ;
}
