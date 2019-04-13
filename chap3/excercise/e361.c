#include<stdio.h>
int main()
{
	int j,i,prime ;
	for(i=2 ;i<=1000;i++){
		prime=1 ;
		for(j=2 ;j<=i/2 ;j++){
			if(i%j==0){prime=0 ;}
		}
		if(prime==1){printf("%d\n",i) ;}
		
		
	}
	return 0 ;
}
