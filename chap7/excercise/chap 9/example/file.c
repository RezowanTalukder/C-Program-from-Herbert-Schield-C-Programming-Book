#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp ;
    int a,b ;
    char str[39] ;
    if((fp=fopen("sd.txt","rb+"))==NULL){
        printf("File open fail\n") ;
        exit(1) ;
    }
    fread
    fclose(fp) ;
    return 0 ;
}
