#include<stdio.h>
int main()
{
    int s, n ;
    scanf("%d",&n) ;
    s=sqr(n) ;
    printf("%d",s) ;
    return 0 ;
}
int sqr(int x)
{
    return x*x ;
}
