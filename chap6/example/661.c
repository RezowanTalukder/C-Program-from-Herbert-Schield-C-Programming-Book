#include<stdio.h>
int main()
{
    char *p,**mp,str[30] ;
    p=&str ;
    mp=&p ;
    gets(*mp) ;
    printf("%s\n",*mp) ;
    return 0 ;
}
