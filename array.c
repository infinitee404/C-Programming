#include<stdio.h>
void main(){
    float arr[] = {0.1, 6.9, 4.2, 6.66, 9.99};
    int i;
    for (i=0; i<5; i++){
        printf("%.2f is located in %u\n",arr[i],&arr[i]);
    }
}
