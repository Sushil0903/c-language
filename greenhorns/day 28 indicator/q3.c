#include <stdio.h>
int sum(int y)
{
    int a[y][y];

    printf("Enter elements of array :\n");
    for (int  i = 0; i < y; i++)
    {
        for (int  j = 0; j < y ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("cube of all element \n");
     for (int  i = 0; i < y; i++)
    {
        for (int  j = 0; j < y ; j++)
        {
            int *s=&a[i][j];
            printf("%d ",(*s)*(*s)*(*s));
        }
        printf("\n");
        
    }
    

}
int main()
{
    int x;
    printf("Enetr array size=");
    scanf("%d",&x);

    sum(x);
}