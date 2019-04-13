#include<stdio.h>
void copy(char *p,char *q) ;
int main()
{
    char str[100] ;
    copy("i love you",str) ;
    printf(str) ;
    return 0 ;
}
void copy(char *p,char *q)
{
    while(*p){
        *q++=*p++ ;
        copy(p,q);
    }
}
