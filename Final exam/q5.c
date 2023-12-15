// wap to find minium number from 3 digit
#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("Enter the value of c :");
    scanf("%d",&c);

    a<b?a<c?printf("%d is small",a):printf("%d ic small",c):b<c?printf("%d is small",b):printf("%d ic small",c);

}