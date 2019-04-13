#include<stdio.h>
int main()
{
    char x ;
    do{
        x=getchar() ;
        printf("%c",toupper(x)) ;
    }while(x!='\n') ;

    return 0 ;
}
