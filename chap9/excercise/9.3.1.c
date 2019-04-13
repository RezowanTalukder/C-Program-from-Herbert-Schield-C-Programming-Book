#include<stdio.h>
#include<stdlib.h>


int main(int argc,char* argv[])
{
    FILE *fp;
    unsigned count;
    
    if(argc!=2)
    {
        printf("File name missing\n");
        exit(1);
    }    
    if((fp=fopen(argv[1],"rb"))==NULL){
        printf("can not open file\n");
        exit(1);
    }
    
    count=0;
    
    while(!feof(fp))
    {
        fgetc(fp);
        
        if(ferror(fp)){
            printf("error in reading file\n");
            exit(1);
        }
        count++;
    }
    printf("File has %u bytes\n",count);
    
    if((fclose(fp))==EOF){
        printf("error in closing source file\n");
        exit(1);
    }
    

    return 0;
}
