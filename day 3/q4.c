// Simple intrest //
#include <stdio.h>
int main()
{
    int p,r,t;

    printf("enetr the principal amount=");
    scanf("%d",&p);

    printf("enetr the rate=");
    scanf("%d",&r);

    printf("enetr the years=");
    scanf("%d",&t);

    printf("the intrest is=%d",p*r*t/100);

    return 0;
}