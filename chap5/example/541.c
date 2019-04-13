#include<stdio.h>
int main(){
    int user[5][2]={
    1,14,
    2,29,
    3,19,
    4,8,
    5,15,
    };
    
    int server;
    int i;
    
    printf("Enter the server number:");
    scanf("%d",&server);
    
    for(i=0;i<5;i++){
        if(server==user[i][0]){
            printf("There are %d users on server %d\n",user[i][1],server);
            break;
        }
        if(i==5)
            printf("Server not listed.\n");
    }
return 0;
}       
             
