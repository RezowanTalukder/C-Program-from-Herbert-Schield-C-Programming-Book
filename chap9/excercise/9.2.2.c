#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int count[26];
	
int main(int argc,char* argv[])
{
	FILE *fp;
	char ch;
	int i;
	
	if(argc!=2){
		printf("Usege :find <file name> <ch>\n");
		exit(1);
	}
	
	if((fp=fopen(argv[1],"r"))==NULL){
		printf("Can't open file\n");
		exit(1);
	}
	
	while((ch=fgetc(fp))!=EOF){
		ch=toupper(ch);
		if(ch >='A' && ch<='Z')count[ch-'A']++;
	}
	printf("\n");
	fclose(fp);
	
	for(i=0;i<26;i++){
		printf("%c is %d times\n",'A'+i,count[i]);
	}
	
	return 0;
}
