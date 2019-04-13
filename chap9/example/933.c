#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fq ;
    if((fp=fopen("D:\s.txt","r"))==NULL){
        printf("File open failed,(source)\n") ;
        exit(1) ;
    }
    if((fq=fopen("D:\d.txt","w"))==NULL){
        printf("file open fail,(destination)\n") ;
        exit(1) ;
    }
    int i ,num[5],sum=0 ;
    char str[5][45] ;
    for(i=0 ;i<4 ;i++){
        fscanf(fp,"%s",str[i]) ;
        fscanf(fp,"%d",&num[i]) ;
        sum+=num[i] ;
    }
    fprintf(fq,"%f",(float)sum/(float)4) ;
    printf("%d\n",sum) ;
    printf("whose number do you want ?\n") ;
    char s[30] ;
    scanf("%s",s) ;
    for(i=0 ;i<4 ;i++){
        fscanf(fp,"%s",str[i]) ;
        fscanf(fp,"%d",&num[i]) ;
        if(!strcmp(s,str[i])){
            printf("%d",num[i]) ;
            break ;
        }
    }
    fclose(fp) ;
    fclose(fq) ;
    return 0 ;
}


