#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
    FILE *from,*to;
    union u_type{
    	int i;
    	char ch;   	
    }uvar;
    
    if(argc!=3)
    {
        printf("Usege :copy <source> <destination>\n");
        exit(1);
    }    
    if((from=fopen(argv[1],"rb"))==NULL){
        printf("can not open file\n");
        exit(1);
    }
    if((to=fopen(argv[2],"wb"))==NULL){
        printf("can not open file\n");
        exit(1);
    }

    for(;;){
    	uvar.i=fgetc(from);
    	if(uvar.i==EOF) break;
    	fputc(uvar.ch,to);  
    }
    
    if((fclose(from))==EOF){
        printf("error in closing source file\n");
        exit(1);
    }
    if((fclose(to))==EOF){
        printf("error in closing destination file\n");
        exit(1);
    }

    return 0;
}
