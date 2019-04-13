#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int i,min ;
    min=strlen(argv[2])<strlen(argv[1]) ? strlen(argv[2])<strlen(argv[1]) ;
    for(i=0 ;i<min ;i++){
        if(argv[1][i]>argv[2][i]){
            printf("%s is lower in laxicographically\n",argv[2]) ;
            exit(1) ;
        }
        if(argv[1][i]<argv[2][i]){
            printf("%s is lower in laxicographically\n",argv[1]) ;
            exit(1) ;
        }
    }
    printf("Both are equal\n") ;
    return 0 ;
}
