#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char str[80]="This is a file system.\n";
	FILE *fp;
	char *p;
	int i;
	
	if((fp=fopen("myfile.txt","w"))==NULL){
		printf("Can't open file\n");
		exit(1);	
	}	
	p=str;
	while(*p)
	{
		if(fputc(*p,fp)==EOF){
			printf("Error writing file.\n");
			exit(1);
		}
		p++;
	}
	fclose(fp);
	
	if((fp=fopen("myfile.txt","r"))==NULL){
		printf("Can't open file\n");
		exit(1);	
	}
	for(;;)
	{
		i=fgetc(fp);
		if(i==EOF)break;
		putchar(i);	
	}
	fclose(fp);

	return 0;
}
