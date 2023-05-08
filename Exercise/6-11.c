//binary converter
#include<stdio.h>
void main(){
	int dec,bin=1,rem,num=0;
	printf("Enter a decimal number\n");
	scanf("%d",&dec);
	while (dec > 0){
		rem = dec%2;
		bin = bin*10 + rem;
		dec = dec/2;
	}
	while (bin > 1){
		rem = bin%10;
		num = num*10 + rem;
		bin = bin/10;
	}
	printf("The binary equivalent is %d\n",num);
}