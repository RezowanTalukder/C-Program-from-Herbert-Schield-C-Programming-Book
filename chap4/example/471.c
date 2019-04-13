#include<stdio.h>
#include<math.h>
int main()
{	
	double i;
	for(i=1.0;i<101.0;i++)
	{
		printf("square root of %lf is %lf\n",i,sqrt(i));
		printf("whole number part:%d ",(int)sqrt(i));
		printf("fractional part:%lf\n"sqrt(i)-(int)sqrt(i));
		printf("\n");
	}
	return 0;
}
