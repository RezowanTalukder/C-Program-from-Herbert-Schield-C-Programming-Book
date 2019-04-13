#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000] ;
    int i ;
    gets(s) ;
    if(strlen(s)>80){
        printf("lenth is gretter then 80\n") ;
        }
    for(i=0 ;i<strlen(s);i++){
        if(i%10==0){
            printf("\n") ;
            }
            printf("%c",s[i]) ;
        }

    return 0 ;
}
