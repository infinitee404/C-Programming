#include<stdio.h>
void main(){
	int num,leng,count=1;
	printf("Enter the number whose multiple table you want and range of table \n");
	scanf("%d %d",&num,&leng);
	while (count <= leng){
	printf("%d x %d = %d \n",num, count, num*count);
	count = count +1;
	}
}
