#include<stdio.h>
void main(){
    int arr[9]={1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i,j,n=0,add;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t",arr[n]);
            n++;
        }
    printf("\n");
    }
    printf("Place a Cross in? (1-9)");
    scanf("%d",&add);
    n=0;
    arr[add-1] = 0;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t",arr[n]);
            n++;
        }
    printf("\n");
    }
}
