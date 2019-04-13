#include<stdio.h>
#include<string.h>
int main(){
    char a[80], b[80];
    int i;
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    
    printf("%s is %d chars long\n",a,strlen(a));
    printf("%s is %d chars long\n",b,strlen(b)); 

    i=strcmp(a,b);
    if(!i)
        printf("The strings are equal\n");
    else if(i<0)
        printf("%s is less than %s\n",a,b);
    else 
        printf("%s is greater than %s\n",a,b); 
        
    if(strlen(a)+strlen(b)<80){
        strcat(a,b);
        printf("%s\n",a);
    }
    
    strcpy(a,b);
        printf("%s %s\n",a,b);
        
return 0;
}

