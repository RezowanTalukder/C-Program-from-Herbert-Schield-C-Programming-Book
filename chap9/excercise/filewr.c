#include<stdio.h>
int main()
{
    FILE *fp_in,*fp_out ;
    int num1,num2 ;
    char *in_name="in.txt",*out_name="out.txt" ;
    fp_in=fopen(in_name,"r") ;
    fp_out=fopen(out_name,"w") ;

    fscanf(fp_in,"%d",&num1) ;
    fscanf(fp_in,"%d",&num2) ;

    int sum ;
    sum=num1+num2 ;

    fprintf(fp_out,"%d",sum) ;
    fclose(fp_in) ;
    fclose(fp_out) ;
    return 0 ;
}
