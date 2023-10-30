// find number netural or not //
#include <stdio.h>
int main()
{
    int num;
    printf("enter the digit=");
    scanf("%d",&num);

    if (num<0)
    {
        printf("The number is negetive");
    }
    else if (num>=1)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is neatural");
    }
    
}