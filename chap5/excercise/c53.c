#include<string.h>
#include<stdio.h>
int main()
{
    int i ,count=0 ;
    char s[1000],ch ;
    gets(s) ;
    for(i=0 ;i<strlen(s) ;i++){
        ch=s[i] ;
        switch(ch){
            case ' ':
            case ',':
            case '.':count++ ;

        }
    }
    printf("%d",count) ;
}
