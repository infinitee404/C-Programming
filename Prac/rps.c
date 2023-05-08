#include<stdio.h>
#include<stdlib.h>
// 1R   2P  3S
int main()
{
	int userNum, compNum, temp;
	printf("Enter a number");
	scanf("%d", &userNum);
	compNum = (rand() % 3 +1) ;
	if (compNum == 1 && userNum == 2 ++ compNum == 2 && userNum == 3 ++ compNum == 3 && userNum == 1  )
		printf("\n You Won!");
	elseif (compNum == userNum)
		printf("\n DRAW!");
	else
		printf("\n You Lost!);
	return 0;
}

		
