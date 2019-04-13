#include<stdio.h>
int main()
{
    f1(5) ;
    return 0 ;
}
void f1(int i)
{
    if(i){
        f2(i-1) ;
        printf("%d\n",i) ;
    }
}
void f2(int j)
{
     printf("hello\n") ;
    if(j){
        f1(j-1) ;
    }
}
