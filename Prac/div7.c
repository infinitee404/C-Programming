#include <stdio.h>
void main(){
	int n1,n2,temp,i,sum=0,count=0;
	printf("Enter two numbers\n");
	scanf("%d %d",&n1,&n2);
	if(n2<n1){
		printf("Enter two numbers such that first number is lesser than second \n");
	}
	else{
		for(i=n1+1;i<n2;i++){
			if (i%7==0){
				sum+=i;
				count++;
			}
		}
		printf("There are %d integers divisible by 7\n",count );
		printf("The sum of those integrs is %d\n",sum );
	}
}