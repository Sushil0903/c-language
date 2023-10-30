// swap the value using variable

#include <stdio.h>
int main()
{
    int a,b,c;

    printf("eneter the value of a=");
    scanf("%d",&a);
    printf("enetr the value of b=");
    scanf("%d",&b);


    c=a;
    a=b;
    b=c;

    printf("the value of a%d\n",a);
    printf("the value of b%d",b);
}