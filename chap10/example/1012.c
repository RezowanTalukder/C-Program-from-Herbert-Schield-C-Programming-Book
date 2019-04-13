#include<stdio.h>
int main()
{
	struct s{
		int i ;
		char ch;
		char str[50] ;
	}student[30] ;
	printf("%d\n",sizeof(struct s)) ;
	int st[30] ;
	int stu ;
	printf("%d %d\n",sizeof(st),sizeof(stu)) ;
	return 0 ;
}
