#include<stdio.h>
int main()
{
	char word[80] ;
	int i ;
	printf("enter a massage less than 80 letter.\n") ;
	for(i=0 ; ;i++){
		word[i]=getchar() ;
		if(word[i]=='\n')break ;
	}
	printf("%s",word) ;
	return 0 ;
}
