#include<stdio.h>
void main(){
	int s1, s2, s3, s4, s5,per;
	printf("Enter marks in 5 subjects.\n");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	per=(s1+s2+s3+s4+s5)/5;
	if (per > 80)
		printf("Distinction");
	else if (per >65)
		printf("first division");
	else if (per>50)
		printf("second division");
	else if (per>35)
		printf("third division");
	else
		printf("Failed!");
	printf("Percentage:  %d",per);
}

