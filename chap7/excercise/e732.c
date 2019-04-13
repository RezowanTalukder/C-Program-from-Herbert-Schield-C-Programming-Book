#include<stdio.h>
void hello(char *st) ;
int main()
{
    char str[40] ;
    hello(str) ;
    printf("your name is %s\n",str) ;
    return 0 ;
}
void hello(char *st){
    scanf("%s",st) ;
}
