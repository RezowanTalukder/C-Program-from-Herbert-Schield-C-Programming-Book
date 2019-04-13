#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[60],*p ;
    gets(str) ;
    p=str ;
    while(*p){
        *p=toupper(*p) ;
        p++ ;
    }
    printf("%s\n",str) ;
    gets(str) ;
    p=str ;
    while(*p){
        *p=tolower(*p) ;
        p++ ;
    }
    printf("%s\n",str) ;
    return 0 ;
}
