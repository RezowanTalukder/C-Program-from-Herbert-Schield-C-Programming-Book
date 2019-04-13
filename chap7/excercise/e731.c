#include<stdio.h>
int hello(int *x,int max,int min) ;
int main()
{
    int i ;
    printf("sum is %d\n",hello(&i,1,2)) ;
    return 0 ;
}
int hello(int *x,int max,int min)
{
    scanf("%d",x) ;
    return *x+max+min ;
}
