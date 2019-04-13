#include<stdio.h>

int main(void)
{
	union t_type{
		long l;
		int i;
		
	}uvar;
	
	uvar.1=0L;
	uvar.i=100;
	
	printf("%ld\n",uvar.1);

	return 0;
}
