//#include<stdio.h>
//#include<stdlib.h>
//void main(){
//	int i,temp,num;
//	printf("How many characters? \n");
//	scanf("%d",&num);
//	for (i=0;i<num;i++){
//		srand(time(NULL));
//		temp = rand()%26+1;
//		temp = temp+96;
//		printf("%c",temp);
//	}
//	printf("\n");
//}

#include<stdlib.h>

int main(int agrc, const char *argv[]) {
 int i = rand();
 printf("%d\n",i);
 for(i=0;i<10;i++) {
  srand(time(NULL));
  printf("%d\n",rand());
 }
}
