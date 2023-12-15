//  wap to find square of given elements
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of an aaray=");
    scanf("%d",&n);

    int a[n];
    printf("Enter elements of array :\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Square of given elements are :\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",a[i]*a[i]);
    }
    
    
}