#include<stdio.h>
void f1(int a) ;
void f2(int b) ;
int main()
{
    f1(10) ;
    return 0 ;
}
void f1(int a)
{
    if(a){


     f2(a-1) ;
      printf("%d",a) ;
    }

}
void f2(int b)
{
    if(b){

        printf(".") ;
        f1(b-1) ;
    }
}
