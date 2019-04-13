#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fp1,*fp2 ;
	char *ch1,*ch2 ;
	//int i=0 ;
	fp1=fopen(argv[1],"rb") ;
	fp2=fopen(argv[2],"rb") ;
	ch1=fp1 ;
	ch2=fp2 ;
	while(!feof(fp1)||!feof(fp2)){
		if(*ch1!=*ch2){
			printf("NOT EQUAL\n") ;
			printf("unequal character :%c and %c\n",*ch1,*ch2) ;
			break ;
		}
		else printf("EQUAL\n") ;
		*ch1++ ;
		*ch2++ ;
	}
	fcloseall() ;
	return 0 ;
}
