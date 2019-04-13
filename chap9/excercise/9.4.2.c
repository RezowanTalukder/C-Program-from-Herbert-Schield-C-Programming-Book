#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc,char* argv[])
{
    FILE *fp;
    char ch,str[80];
    int count;
    
    if(argc!=2)
    {
        printf("Usage: dsplay <file>\n");
        exit(1);
    }    
    if((fp=fopen(argv[1],"rb"))==NULL){
        printf("can not open file\n");
        exit(1);
    }
       
    count=0;
    while(!feof(fp))
    {
     	fgets(str,79,fp);
     	printf("%s",str);   
    	cont++;
    	
    	if(count==23){
    		printf("More? (Y/N)");
    		gets(str);
    		if(toupper(*str)=='N')break;
    		count=0;
    	}
	}
	close(fp);
	
    return 0;
}
