#include <stdio.h>
void main(){
	int a=1,b=1,m;
	printf("Enter final term for the series\n");
	scanf("%d",&m);
	do{
		printf("%d\t",a);
		printf("%d\t",b);
		a=a+b;
		b=a+b;
	} while(b<m);
	printf("\n");
}