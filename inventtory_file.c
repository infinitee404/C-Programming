#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    int i;
    fptr = fopen("C:\\Data\\Programs\\c\\inventory.txt","w+");
    if (fptr == NULL){
        printf("Unable to open file!\n");
        exit(0);
    }
    fprintf(fptr,"Product Name \t Quantity \t Rate\n");
    fprintf(fptr,"AAA \t\t 3 \t\t 50\n");
    fprintf(fptr,"BBB \t\t 2 \t\t 100\n");
    fprintf(fptr,"CCC \t\t 4 \t\t 40\n");
    printf("Product Name \t Quantity \t Rate \t Total Amount\n");
    char pname[10],buffer[100];
    int qty, rate, total;
    rewind(fptr);
    fgets(buffer, 100, fptr);
    for (i=0; i<3; i++){
        fscanf(fptr,"%s",pname);
        fscanf(fptr,"%d",&qty);
        fscanf(fptr,"%d",&rate);
        total = qty*rate;
        printf("%s \t\t %d \t\t %d \t %d\n",pname,qty,rate,total);
    }
    fclose(fptr);
    return 0;
}
