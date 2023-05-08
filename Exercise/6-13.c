#include<stdio.h>

//function module to return factorial of a given number
float fact(long int x){
	long int fac=1;
	for (int i=2;i<=x;i++){
		fac=fac*i;
	}
	return fac;
}

//main module
void main(){
	int count=1;
	double e,diff=1,temp,new;
	e = count;
	while (diff > 0.00001){
		temp = e;
		e = e + 1/(fact(count));
		diff = e- temp;
		count++;
	}
	printf("The value of Euler's constant(e) is : %.25f\n",e);
}