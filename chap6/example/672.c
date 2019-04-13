#include<stdio.h>
int main()
{
    char str[40] ;
    my_strcpy(str,"i love coding") ;
    printf("%s\n",str) ;
    return 0 ;
}
void my_strcpy(char *to,char *from)
{
    while(*from){
        *to++=*from++ ;
    }
    *to='\0' ;
}
