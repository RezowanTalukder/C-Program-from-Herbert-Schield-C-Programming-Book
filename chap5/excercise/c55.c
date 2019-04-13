#include<stdio.h>
int main()
{
    char ch,x ;
    char s[15] ;
    int count=9 ;
    do{
        printf("word remains %d word to guess\ndont repeat any letter.\n",count) ;
        ch=getchar() ;
        x=getchar() ;
        switch(ch){
    case 'b':count-- ;break ;
    case 'a':count-- ;break ;
    case 'n':count-- ;break ;
    case 'g':count-- ;break ;
    case 'l':count-- ;break ;
    case 'd':count-- ;break ;
    case 'e':count-- ;break ;
    case 's':count-- ;break ;
    case 'h':count-- ;break ;
        }
    }
    while(count!=0) ;
    printf("\nsucessfull!!!\nyour magic word is bangladesh.\n") ;
    printf("thanks for playing\n") ;
}
