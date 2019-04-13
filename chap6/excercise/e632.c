#include<stdio.h>
int main()
{
    int temp[]={10,20,30,40} ;
    int *p ;
    p=temp ;
    printf("%d\n",*(p+3)) ;
    return 0 ;
}
