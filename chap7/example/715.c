#include<stdio.h>
int init(int *x) ;
int main()
{
    int *p ;
    p=init(110) ;
    printf("%d\n",*p) ;
    return 0 ;
}
int init(int *x)
{
    int count ;
    scanf("%d",&count) ;
    x=&count ;
    return x ;
}
