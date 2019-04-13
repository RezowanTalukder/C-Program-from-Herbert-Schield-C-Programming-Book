#include<stdio.h>
int main()
{
    int n,f,i,a,count=0 ;
    scanf("%d%d",&n,&f) ;
    for(i=0 ;i<n ;i++){
        scanf("%d",&a) ;
        if(a>f){
            count+=2 ;
        }
        else {
            count+=1 ;
        }
    }
    printf("%d",count) ;
    return 0 ;
}
