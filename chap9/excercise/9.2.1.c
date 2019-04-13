#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
	FILE *fp;
	char ch;
	
	if(argc!=2){
		printf("Usege :find <file name> <ch>\n");
		exit(1);
	}
	
	if((fp=fopen(argv[1],"r"))==NULL){
		printf("Can't open file\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	printf("\n");
	fclose(fp);
	
	return 0;
}
