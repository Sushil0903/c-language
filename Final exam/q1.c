// wap to find even numbers from given range using udf
#include <stdio.h>
int even(int m,int x)
{
    printf("Even numbers are :\n");

    for (int  i = m; i <=x; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
    }
    
}
int main()
{
    int n,o;
    printf("enter first digit of range =");
    scanf("%d",&n);
    printf("enter last digit of range =");
    scanf("%d",&o);

    even(n,o);
}