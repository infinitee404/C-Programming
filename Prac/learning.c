#include<stdio.h>
void main(){
	char a,b;
	int p,q;
	float x,y;
	// a='A'; b='B';
	// p=10; q=20;
	// x=1.23; y=2.34;
	printf("%c is stored in address %p.\n",a,&a);
	printf("%c is stored in address %p.\n",b,&b);
	printf("%d is stored in address %p.\n",p,&p);
	printf("%d is stored in address %p.\n",q,&q);
	printf("%f is stored in address %p.\n",x,&x);
	printf("%f is stored in address %p.\n",y,&y);
}