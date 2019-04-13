#include <stdio.h>

int main(){
	
	int a,s,i,l,w;
	
	printf("Enter the number of rooms: ");
	scanf("%d",&a);
	
	s=0;
	
	for(i=1;i<=a;i++){
	
		printf("The dimensions of room%d\n",i);
		scanf("%d%d",&l,&w);
		s=s+l*w;	
		
	}
	printf("The house is %d sq.feet.\n",s);

	return 0;
}
