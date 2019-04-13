#include <stdio.h>
int main(){
	
	int x;
	
	for(x=17;x<101;x=x+1)
		if(x%17==0)printf("%d\n",x);
	
	return 0;
}
