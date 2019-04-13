#include<stdio.h>
int main()
{
	int i,j ;
	scanf("%d",&i) ;
	scanf("%d",&j) ;
	printf("i xor j=%d\n",xor(i,j)) ;
	printf("i xnor j=%d\n",xnor(i,j)) ;
	return 0 ;
}
int xor(int a,int b){
	return (a||b)&&!(a&&b) ;
}
int xnor(int a,int b)
{
	return (a&&b)||(!a&&!b) ;
}
