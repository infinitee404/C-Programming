#include<stdio.h>
int main()
{
    long num;
    printf("enter a number\n");
    scanf("%ld",&num);
    if (num >0){
        printf("Positive");
    } else {
        printf("Negative");
    }
    return 0;
}
