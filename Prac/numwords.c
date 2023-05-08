#include<stdio.h>
void main(){
	long int num,temp,div=10000;
	int rem;
	printf("Enter a 5 digit number\n");
	scanf("%ld",&num);
	while (num>0){
		rem = num/div;
		num = num - (rem*div);
		div = div/10;
		switch (rem){
			case 0:
			printf("Zero ");
			break;
			case 1:
			printf("One ");
			break;
			case 2:
			printf("Two ");
			break;
			case 3:
			printf("Three ");
			break;
			case 4:
			printf("Four ");
			break;
			case 5:
			printf("Five ");
			break;
			case 6:
			printf("Six ");
			break;
			case 7:
			printf("Seven ");
			break;
			case 8:
			printf("Eight ");
			break;
			case 9:
			printf("Nine ");
			break;
				
		}
	}
	printf("\n");
}