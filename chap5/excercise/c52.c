#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000] ;
    int i,j ;
    gets(s) ;
    for(i=0 ;i<(strlen(s)/2);i++){
        printf("%c",s[i]) ;
        for(j=strlen(s)-1 ;j>(strlen(s)/2) ;j--){
            printf("%c",s[j]) ;
            break ;
        }
    }
    return 0 ;
}
