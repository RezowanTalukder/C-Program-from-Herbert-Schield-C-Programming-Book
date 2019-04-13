#include<stdio.h>
void promt(char *ch,int *p) ;
int main()
{
    int i ;
    promt("enter a number",&i) ;
    return 0 ;
}
void promt(char *ch,int *p)
{
    printf(ch) ;
    scanf("%d",p) ;
}
