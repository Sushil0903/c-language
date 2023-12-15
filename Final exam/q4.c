// wap to print even number from 2d array using pointer
#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter row of array=");
    scanf("%d",&r);
    printf("Enter coloumn of array=");
    scanf("%d",&c);

    int a[r][c];
    printf("Enter elements of array :\n");
    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            int *ptr=&a[i][j];
            printf("a[%d][%d]=",i,j);
            scanf("%d",&*ptr);
        }
        
    }

    printf("Even number from array are :\n");

    for (int  i = 0; i < r; i++)
    {
          for (int  j = 0; j < c; j++)
         {
            int *ptr=&a[i][j];
            if (*ptr%2==0)
            printf("%d ",*ptr);
         }
   
    }
  
}