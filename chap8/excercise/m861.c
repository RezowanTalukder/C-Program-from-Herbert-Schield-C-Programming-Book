#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch ;
    do{
    getchar(ch) ;
    printf("%d",ch) ;
    }while(ch!='q') ;
    return 0 ;
}
