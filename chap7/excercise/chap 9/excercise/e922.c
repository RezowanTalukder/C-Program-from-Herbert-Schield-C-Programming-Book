#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp ;
	char ch[100] ;
	int i,k ,l=0 ;
	if((fp=fopen("read.txt","r"))==NULL){
		printf("file open fail\n") ;
		exit(1) ;
	}
	fscanf(fp,"%s",ch) ;
	printf("%s\n",ch) ;
	for(i=97,k=65 ;i<=122,k<=92 ;i++,k++ ){
		int count=0 ,j  ;
		for(j=0 ;j<strlen(ch) ;j++){
			if(ch[j]==i||ch[j]==k)count+=1 ;
		}
		printf("number of %c is %d \n ",i,count) ;
	}
	
	return 0 ;
}
