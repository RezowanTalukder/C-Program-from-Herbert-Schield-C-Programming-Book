#include<stdio.h>
int main(){

	int i;
	char ch;
	for(i=1;i<1000000;i++){
	
		if(i%6==0){
		
			printf("%d,more?(Y/N)",i);
			ch=getchar();
			
			if(ch=='N') break;
		}
	}
	return 0;
}
