#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    int num,i,a;
    fptr = fopen("C:\\Data\\Programs\\c\\natural.txt","w+");
    if (fptr == NULL){
        printf("Unable to open file!\n");
        exit(0);
    }
    for(i=1; i<=20; i++){
        fprintf(fptr,"%d\n",i);
    }
    rewind(fptr);
    for (a=1; a<=20; a++){
        fscanf(fptr,"%d",&num);
        printf("%d\n",(num*2));
    }
    fclose(fptr);
    return 1;
}

