#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char* argv[])
{
    FILE *fp1,*fp2,*temp;
    char ch;
    
    if(argc!=3)
    {
        printf("Usege :exchange <f1> <f2>\n");
        exit(1);
    }    
    if((fp1=fopen(argv[1],"r"))==NULL){
        printf("can not open the first file\n");
        exit(1);
    }
    if((fp2=fopen(argv[2],"r"))==NULL){
        printf("can not open the second file\n");
        exit(1);
    }
    if((temp=fopen("temp.tmp","w"))==NULL){
        printf("can not open the temporary file\n");
        exit(1);
    }
     
    while(!feof(fp1))
    {
        ch=fgetc(fp1);
        fputc(ch,temp);
    }
    fclose(fp1);
    
    if((fp1=fopen(argv[1],"w"))==NULL){
        printf("can not open the first file\n");
        exit(1);
    }
    while(!feof(fp2))
    {
        ch=fgetc(fp2);
        fputc(ch,fp1);
    }
    fclose(fp2);
    fclose(temp);
    
    if((fp2=fopen(argv[2],"w"))==NULL){
        printf("can not open the second file\n");
        exit(1);
    }
    if((temp=fopen("temp.tmp","r"))==NULL){
        printf("can not open the temporary file\n");
        exit(1);
    }
    while(!feof(temp))
    {
        ch=fgetc(temp);
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(temp);

    return 0;
}
