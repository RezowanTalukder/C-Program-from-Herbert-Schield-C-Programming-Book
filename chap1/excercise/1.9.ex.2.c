#include<stdio.h>
void outchar() ;
int main()
{
    outchar('A') ;
    outchar('B') ;
    return 0   ;
}
int outchar(char ch)
{
    printf("%c\n",ch) ;
    return 0 ;
}
