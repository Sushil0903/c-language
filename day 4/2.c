// swap the value without varible

#include <stdio.h>
int main()
{
    int a,b;
     printf("enetr the value of a=");
     scanf("%d",&a);
    printf("enetr the value of b=");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("the new value of a=%d\n",a);
    printf("the new value of b=%d",b);
}