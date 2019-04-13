#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i ;
    for(i=0 ;i<10;i++)
    printf("%5d %5d %5d\n",rand(),10*rand(),100*rand()) ;
    return 0 ;
}
