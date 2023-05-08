#include <stdio.h>

int main(){

    struct Info{
        char name[30];
        int age;
        struct address{
            char area_name[20];
            int house_no;
        }address;
    };

    struct Info Person;
    printf("enter name\t");
    scanf("%s",Person.name);
    printf("enter age\t");
    scanf("%d",&Person.age);
    printf("enter address :\n");
    printf("enter area name :\t");
    scanf("%s",&Person.address.area_name);
    printf("enter house no : \t");
    scanf("%d",&Person.address.house_no);
}
