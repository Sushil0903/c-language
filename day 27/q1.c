#include <stdio.h>
int main()
{
    int x;
    printf("Enetr array size \n");
    scanf("%d",&x);
    int a[x];
    printf("Enetr array element\n");

    for (int  i = 0; i <x; i++)
    {
       scanf("%d",&a[i]);
    }

    for (int  i = x-1; i >=0; i--)
    {
        int *ap=&a[i];
        printf("%d ",*ap);
    }
    
    
}