#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],str2[30],*p,*q ;
    int i,j ;
    gets(str) ;
    for(i=0 ; ;i++){
        if(str[i]=='\t'){
            p=str+i ;
            q=str2;
            while(*p!='\0'){
                *q++=*p++ ;
            }
            *q='\0' ;
            break ;
        }
    }
    printf("%s",str2) ;
    return 0 ;
}
