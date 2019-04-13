#include<stdio.h>
int main()
{
	char data[3][2][50]={
		"rakib","019964152346",
		"rezowan","01738657014",
		"fuad","0191627346327"
		} ;
		
	char name[40] ;
	printf("whose number:\n") ;
	scanf("%s",name) ;
	int i ;
	for(i=0 ;i<3 ;i++){
		if(strcmp(name,data[i][0])==0){
			printf("%s\n",data[i][1]) ;
			return 0;
		}
	}
	printf("No match found\n") ;
	return 0 ;
	
}
