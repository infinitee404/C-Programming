#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter three numbers. \n");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b)
		if (a>c)
			printf("%d is greatest number.\n",a);
		else
			printf("%d is greatest number. \n",c);
	else
		if (b>c)
			printf("%d is greatest. \n",b);
		else
			printf("%d is greatest. \n",c);
}

