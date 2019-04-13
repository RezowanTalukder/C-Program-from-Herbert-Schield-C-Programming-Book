#include<stdio.h>
#include<string.h>
int data(char *c,float *f) ;
int main()
{
    char name[9][30],*cp ;
    int i,j,temp ;
    float run[9] ,*fp ;
    fp=&run ;
    cp=name ;
    for(i=0 ;i<3 ;i++){
        printf("Player name : ") ;
        scanf("%s",name[i]) ;
        printf("Enter avarage run: ") ;
        scanf("%f",&run[i]) ;
    }
    printf("\n") ;
    int x ;
    printf("what do you want: \n1.data\n2.highest and lowest run\n3.sort\n") ;
    scanf("%d",&x) ;
    switch(x){
        case 1:data(cp,fp) ;
        case 2:high_low(cp,fp) ;break
        case 3:sort(cp,fp) ;
    }
    printf("sucessfull\n") ;
    return 0 ;
}
int data(char *c,float *f)
{
    int i ;
    printf("player History\n\n") ;
    for(i=0 ;i<3 ;i++){
        printf("%s : %d\n",*(c+=1),*(f+=1)) ;
        c+=1 ;
        f+=1 ;
    }
    return 0 ;
}
