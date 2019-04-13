//WRONG

#include<stdio.h>
int main()
{
    char ch[60],s ;
    int i ;
    for(i=0 ; ch[i]!='\0' ;i++){
        ch[i]=hello(s) ;
    }
        printf("%s\n",ch) ;
    return 0 ;
}
int hello(char x)
{
    scanf("%c",&x) ;
}
