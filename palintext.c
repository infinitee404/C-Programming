#include <stdio.h>
#include <string.h>

 void main(){
    char test[20];
    int i, len;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", test);
    strlwr(test);
    len = strlen(test);

    for(i=0;i < len ;i++){
        if(test[i] != test[len-i-1]){
            flag = 1;
            break;
   }
}
    if (flag)
        printf("Not palindrome");
    else
        printf("Palindrome");
}

