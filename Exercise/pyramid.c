#include <stdio.h>
void main(){
	int i,j,k,n=0;
	for (i=1;i<=9;i+=2){
		for (k=9;k>=i;k-=2){
			printf("\t");
		}
		for (j=1;j<=i;j++){
			n=j;
			printf("%d\t",n);
		}
	printf("\n");
	}
}