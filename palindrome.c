#include<stdio.h>
#include<string.h>
void main(){
    char rev[30],name[30],len,i;
    printf("Enter your name: ");
    scanf("%s",name);
    len = strlen(name);
    for (i =0; i<len; i++){
        rev[len-i] = name[i];
    }
    //if (rev[i]=name[i]){
    //    printf("Palindrome");
    //}
    //printf("%d \n",len);
    printf("  %s",rev);
}
