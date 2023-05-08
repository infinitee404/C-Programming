#include <stdio.h>
void main(){
	int i,j,num,sum=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	for (j=1;j<=num;j++){	
		for (i=1;i<j;i++){
			if (j%i==0)
				sum+=i;
		}
		if (sum==j)
			printf("%d \t",j);
		sum=0;
	}
}