#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50],*p1,*p2 ;
    gets(str1) ;
    p1=str1+strlen(str1)-1 ;
    p2=str2 ;
    while(*p1){
    *p2++=*p1-- ;
    }
    *p2='\0' ;
    printf("%s",str2) ;
    return 0 ;
}
