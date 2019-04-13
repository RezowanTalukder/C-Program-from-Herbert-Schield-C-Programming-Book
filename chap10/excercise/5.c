#include<stdio.h>
#include<stdlib.h>

struct s_type{
	char name[40];
	char phone[14];
	int hours;
	double wage;
	
}emp[10];

int main(void)
{
	FLE *fp;
	int i;
	
	if((fp=fopen("emp","rb"))==NULL){
		printf("Cannot open EMP file.\n");
		exit(1);
	}

	fread(emp,sizeof emp,1,fp);
	for(i=0;i<10;i++){
		printf("%s %s\n",emp[i].name,emp[i].phone);
		printf("%s %s\n",emp[i].hours,emp[i].wage);
	}
	close(fp);
	
	return 0;
}


