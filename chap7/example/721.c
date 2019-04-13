#include<stdio.h>
int recurse(int i) ;
int main()
{
    recurse(0) ;
    return 0 ;
}
int recurse(int i)
{
    if(i<11){
         recurse(i+1) ;
        printf("%d\n",i) ;

    }
}
