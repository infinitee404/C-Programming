#include <stdio.h>
void main(){
	int i,j,count=1;
	for (i=1;i<=15;i++){
		//for three long rows
		if ((i<4) || (i>6 && i<10) || (i>12))
		for (j=1;j<=18;j++){
			printf("* ");
		}
		//for the first row of 4 *'s
		else if (i>=4 && i<=6)
			for (j=1;j<=3;j++){
				printf("* ");
			}
		//for the second row of 4 *'s
		else if (i>=10 && i<=12){
			//to add the spacing in the left
			for (j=1;j<=14;j++){
				printf("  ");
			}
			for (j=15;j<=18;j++){
				printf("* ");
			}
		}
		printf("\n");
	}	
}