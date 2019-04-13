#include<stdio.h>
int fact(int x) ;
int main()
{
    int num=5 ;
    printf("factorial : %d\n",fact(num)) ;
    return 0 ;
}
int fact(int x)
{
    int a ;
    if(x==1)return 1 ;
    else a=x*fact(x-1) ;
    return a ;
}
