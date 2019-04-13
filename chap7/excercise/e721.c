#include<stdio.h>
int fact(int i) ;
int main()
{
    printf("%d\n",fact(5)) ;
    return 0 ;
}
int fact(int i)
{
    if(i>1)return i*fact(i-1) ;
}
