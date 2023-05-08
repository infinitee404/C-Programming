#include<stdio.h>
int main(){
    float num=50;
    float *p;
    p = &num;
    printf("address of p variable is %u\n",p);
    p = p + 3;
    printf("address of p variable is %u\n",p);
    return 0;
}
