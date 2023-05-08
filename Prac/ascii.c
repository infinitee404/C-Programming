#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char msg[150];
	int i,len,temp=0;
	printf("Enter your message\n");
	scanf("%[^\n]",msg);
	len = strlen(msg);
	for (i=0;i<=len;i++){
		if (msg[i]==' '){
			temp=rand()%3+1;
			switch(temp){
				case 1:
			     printf("@");
			     break;
				case 2:
			     printf("#");
			     break;
				case 3:
			     printf("$");
			     break;
			}
		}
		else
			temp= msg[i];
			temp+=5;
			printf("%c",temp);
	}
	printf("\n");
	return 0;
}