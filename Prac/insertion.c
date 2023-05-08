#include <stdio.h>

void main(){
    int num[100],nu,i,j,temp;
    printf("Enter total number of items\t");
    scanf("%d",&nu);

    for (i=0; i<nu;i++){
        printf("Element no %d\n",i);
        scanf("%d",&num[i]);
    }
    
    for (i=0; i<(nu-1);i++){
        for (j=0; j<(nu-1-i);j++){
            if (num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
    printf("Numbers in ascending order is\n");
   
   for (i=0; i<nu;i++){
        printf("%d\n",num[i]);
   }
    
    
    
}