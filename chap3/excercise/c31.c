#include<stdio.h>
int main()
{
	char ch ;
	ch=getchar() ;
	switch(ch){
		case '\t' :printf("tab\n") ;break ;
		case '\n' :printf("new line\n" );break ;
		case 'q' :return 0 ;
		
		default : printf("unecognised numb er|\n") ;
	}
	return 0 ;
}
