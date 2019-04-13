#include<stdio.h>
int main()
{
	float i;
	for(i=1 ;i<100 ;i++){
		printf("%.2f\t%f\t%f\n",i,i*.01,i*.5) ;
	}
}
