#include<stdio.h>
int main()
{
    int *p,n ;
    p=&n ;
    *p=100 ;
    printf("%d\n",*p) ;
    printf("%p\n",p) ;
    return 0 ;
}
