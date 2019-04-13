#include<stdio.h>
void recurse(char *st) ;
int main()
{
    char str[]="hello world" ;
    recurse(str) ;
    return 0 ;
}
void recurse(char *st){
    if(*st!=NULL){
        printf("%c",*st) ;

    }
    recurse(*st++) ;
}
