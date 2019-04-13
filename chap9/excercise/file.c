#include<stdio.h>
int main()
{
	FILE *in,*out ;
	char *input="in.txt" ;
	char *output="out.txt" ;
	int n1,n2,sum ;
	in=fopen(input,"r") ;
	out=fopen(output,"w") ;
	
	fscanf(in,"%d",&n1) ;
	fscanf(in,"%d",&n2) ;
	sum=n1+n2 ;
	fprintf(out ,"%d",sum) ;
	fclose(in) ;
	fclose(out) ;
	return 0 ;
}
