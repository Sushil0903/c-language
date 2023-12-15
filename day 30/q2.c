#include <stdio.h>
int main()
{
    
        FILE *num=fopen("number.txt","w");

    for (int  i = 1; i <=50; i++)
    {
        if (i%3==0 && i%5==0)
        {
        printf("%d ",i);
        fprintf(num,"%d ",i);
        }
        
    }

    
}