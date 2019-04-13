#include<stdio.h>
int main()
{
	char ch,temp ;
	
	do{
	scanf("%c",&ch) ;
	scanf("%c",&ch) ;
	switch(ch){
		case '\t' : printf("tab\n") ;break ;
		case '\n' : printf("new line\n") ;break ;
	}
	}
	while(1) ;
	return 0 ;
}
