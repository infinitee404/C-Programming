#include<stdio.h>
void main(){
	int i,j;
	for (i =1;i<=10;i++){
		for (j=5; j<=9;j++){
			printf("%d x %d = %d \t", j,i,j*i);
		}
		printf("\n");
	}
}