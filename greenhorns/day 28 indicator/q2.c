#include <stdio.h>

int main()
{
    int x;
    printf("Enter size of array =");
    scanf("%d",&x);

    int a[x][x];

   for (int  i = 0; i < x; i++)
   {
       for (int  j = 0; j < x; j++)
       {
        scanf("%d",&a[i][j]);
       }
   }
   printf("cube of all element\n");

  for (int  i = 0; i < x; i++)
   {
       for (int  j = 0; j < x; j++)
       {
        int *s=&a[i][j];
         printf("%d ",(*s)*(*s)*(*s));
       }
       printf("\n");
   }
}