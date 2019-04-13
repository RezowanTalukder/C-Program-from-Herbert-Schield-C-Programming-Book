#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char c[80], t[80];
    int i,j;
    for( ; ;){
        printf("Operation:");
        gets(c);
        if(!strcmp(c,"quit"))
            break;
        
        printf("Enter first number:");
        gets(t);
        i=atoi(t);
         
        printf("Enter second number:");
        gets(t);
        j=atoi(t);
        
        if(!strcmp(c,"add"))
            printf("%d\n",i+j);
        else if(!strcmp(c,"subtract"))
            printf("%d\n",i-j);
        else if(!strcmp(c,"divide")){
            if(j)
                printf("%d\n",i/j); 
        }
        else if(!strcmp(c,"multiply"))
            printf("%d\n",i*j);
        else 
            printf("Unknown command\n");
    }
return 0;
}
