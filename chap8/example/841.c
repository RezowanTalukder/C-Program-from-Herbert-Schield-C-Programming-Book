#include<stdio.h>
int main()
{
    char *p,str[50] ;
    p=gets(str) ;
    if(p)printf("%s %s",p,str) ;
    return 0 ;
}
