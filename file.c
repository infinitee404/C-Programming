#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char text[20],filename[20],string[100],content[100],c;
    FILE *fptr;
    printf("Enter filename:\n");
    scanf("%s",filename);
    fptr = fopen(filename,"w");
    if (fptr == NULL){
        printf("Unable to open file.");
        exit(0);
    }
    printf("Enter text:\n");
    scanf("%[^\n]",content);
    fputs(content, fptr);
    fclose(fptr);
}
