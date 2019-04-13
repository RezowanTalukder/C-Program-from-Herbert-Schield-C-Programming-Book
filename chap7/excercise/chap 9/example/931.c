#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *from,*to ;
	char ch ;
	from=fopen(argv[1],"rb") ;
	to=fopen(argv[2],"wb") ;
	while(!feof(from)){
		ch=fgetc(from) ;
		fputc(ch,to) ;
	}
	fcloseall() ;
	return 0 ;
}
