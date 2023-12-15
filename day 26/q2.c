#include <stdio.h>
int main()
{
      int a,b;
      printf("Enetr value of a=");
      scanf("%d",&a);
      printf("Enetr value of b");
      scanf("%d",&b);

    printf("Before swapping : \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
      int *a1=&a;
      int *a2=&b;

    int *c = *a1;
      *a1 = *a2;
      *a2 = c;

    printf("After swpping : \n");
      printf("a = %d\n",a);
      printf("b = %d\n",b);

}