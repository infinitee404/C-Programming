#include <stdio.h>
#include<string.h>
void main(){
	char cip[150];
	int i,len,temp=0;
	printf("Enter cipher text \n");
	scanf("%[^\n]",cip);
	len = strlen(cip);
	for (i=0;i<=len;i++){
		if (cip[i]=='@' || cip[i]=='#' || cip[i]=='$'){
			printf(" ");
		}
		else
			temp=cip[i];
			temp-=5;
			printf("%c",temp);
	}
	printf("\n");
}