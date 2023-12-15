#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    printf("Enetr the string :\n");
    gets(a);
    
    int l=strlen(a);
    int *s=&l;

    printf("lenth of string is= %d",*s);
    
    

    
}