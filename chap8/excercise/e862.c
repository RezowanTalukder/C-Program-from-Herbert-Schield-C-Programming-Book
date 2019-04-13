#include<stdio.h>
int main()
{
    float f ;
    scanf("%[^0123456789.]",&f) ;
    printf("%f",f) ;
    return 0 ;
}
