#include<stdio.h>
void main(){
	int a,i;
	printf("Enter the number whose multiples you want\n");
	scanf("%d", &a);
	for (i =0; i <100; i++){
	if (i%a==0)
	printf("%d\t",i);
	}
}
