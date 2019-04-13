#include<stdio.h>
#include<string.h>
int main()
{
	char word[1][5][100] ;
	char mean[1][5][100],word1[100] ;
	int i,j,k ;
	printf("time for setting word and meaning:\n") ;
	for(i=0 ;i<1 ;i++){
		for(j=0 ;j<5 ;j++){
			printf("enter word:") ;
			gets(word[i][j]) ;
			printf("enter meaning:") ;
			gets(mean[i][j]) ;
		}
	}
	printf("welcome to oxford dictionary!!!\n") ;
	printf("enter word :") ;
	gets(word1) ;
	for(i=0 ;i<1 ;i++){
		for(j=0 ;j<5 ;j++){
		if(strcmp(word1,mean[i][j])==0){
			printf("%s means %s\n",word1,mean[i][j]) ;
			}
		}
	}
	return 0 ;
}
