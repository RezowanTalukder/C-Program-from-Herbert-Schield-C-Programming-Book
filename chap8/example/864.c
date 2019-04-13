#include<stdio.h>
int main()
{
    int i,j ;
    char ch ;
    again:
    scanf("%d%c%d",&i,&ch,&j) ;
    switch(ch){
    case '+':printf("%d\n",i+j);break ;
    case '-':printf("%d\n",i-j) ;break ;
    case '*':printf("%d\n",i*j) ;break ;
    case '/':printf("%d\n",i/j) ;
    default:{
        printf("preass again!!\n") ;
        goto again ;

        }
    }
}
