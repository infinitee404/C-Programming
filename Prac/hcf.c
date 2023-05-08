#include <stdio.h>
void main(){
	int a,b,c,d,h,l,temp;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	c=a;d=b;
	while (b>0){
		temp = b;
		b=a%b;
		a=temp;
	}
	h=a;
	l=(c*d)/h;
	printf("HCF is %d and LCM is %d\n",h,l );
}