#include<stdio.h>
#include<conio.h>
int main()
{
    int i ;
    for(i=0 ; ;i++){
        printf("  ") ;
        if(kbhit())break ;
    }
    printf("sucessfull") ;
    return 0 ;
}
