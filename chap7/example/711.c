#include<stdio.h>
void recurse(int x) ;
int main()
{
    recurse(0) ;
    return 0 ;
}
void recurse(int x)
{
    if(x<10){
        printf("%d\n",x) ;

         recurse(x+1) ;
    }
}
