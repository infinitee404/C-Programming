#include <stdio.h>
#include <string.h>
void main()
{
    char str1[] = "Ragdgdgfm", str2[] = "Ragdfgdfmesh", str3[]= "Raofgfdg";
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str3, str1));
    printf("%d\n", strcmp(str1, str2));
}
