#include<stdio.h>
int main()
{
    char **mp,*p,ch ;
    p=&ch ;
    mp=&p ;
    **mp='A' ;
    printf("%c\n",**mp) ;
    printf("%p\n",mp) ;
    printf("%c\n",ch) ;
    return 0 ;
}
