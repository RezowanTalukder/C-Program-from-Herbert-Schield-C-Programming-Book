#include<stdio.h>
void hello(char *massage,int *x) ;
int main()
{
    int i ;
    hello("enter a number:",&i) ;
    printf("your number is %d\n",i) ;
    return 0 ;
}
void hello(char *massage,int *x)
{
    printf(massage) ;
    scanf("%d",x) ;
}
