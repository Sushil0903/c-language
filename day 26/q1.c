#include <stdio.h>
//  square of each element using pointer
int main()
{
    int  y;
    printf("Enetr array size=");
    scanf("%d",&y);
    int a[y];

    printf("Enetr array element :\n");

    for (int  i = 0; i < y; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Square of each element:\n");
    
    for (int  i = 0; i < y; i++)
    {
        int *ap=&a[i];
        printf("%d, ",(*ap)*(*ap));
    }

}