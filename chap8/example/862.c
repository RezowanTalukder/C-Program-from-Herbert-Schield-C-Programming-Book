#include<stdio.h>
int main()
{
    char str[30] ;
    printf("enter letter ,anything to stop the program\n") ;
    scanf("%[a-zA-Z]",str) ;
    puts(str) ;
    return 0 ;
}
