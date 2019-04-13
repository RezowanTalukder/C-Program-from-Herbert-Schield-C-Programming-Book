#include<stdio.h>
int main()
{
	int i ;
	char pas[100] ;
	for(i=0 ;i<3 ;i++){
		gets(pas) ;
		if(strcmp(pas,"Tristan")==0){
			printf("Loged on Sucessfully\n") ;
			return 0 ;
		}
		else{
			printf("Wrong password.Try again\n") ;
		}
	}
	printf("Acass Denied\n") ;
}
