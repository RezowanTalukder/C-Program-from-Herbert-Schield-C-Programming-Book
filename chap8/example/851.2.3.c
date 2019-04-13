#include<stdio.h>
void random() ;
void scan() ;
int main()
{
	int i ,j ;
	scanf("%3d%d\n",&i,&j) ;
	printf("%d\n",i) ;
	printf("%.5d\n",i) ;
	printf("%d\n",j) ;
	printf("%.10s","hello i am rezowan\n" ) ;
	random() ;
	 scan() ;
	return 0 ;
}
void random()
{
	int i ;
	for(i=0 ;i<10 ;i++){
		printf("%10d %d %5d\n",rand(),rand()*2,rand()) ;
	}
}
void scan()
{
	char a[30],b[30], m[30] ;
	scanf("%[a-z]",a) ;
	scanf("%[ABC]",b) ;
	scanf("%[^0123]",m) ;
	printf("%s\n%s\n%s\n",a,b,m) ;
	
}




