// find maxium value using four 
#include <stdio.h>
int main()
{
    int a,b,c,d;

    printf("enetr first digit=");
    scanf("%d",&a);

    printf("enetr second digit=");
    scanf("%d",&b);
    
    printf("enetr third  digit=");
    scanf("%d",&c);
    
    printf("enetr fourth digit=");
    scanf("%d",&d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("The maximum value is=%d",a);
            }
            else
            {
                printf("The maximum value is=%d",d);
            }

        }
        else
        {
            printf("The maximum value is=%d",c);
        }
    
    }
    else if(b>c)
    {
        if(b>d)
        {
            printf("The maximum value is=%d",b);
        }
        else
        {
            printf("The maximum value is=%d",d);
        }
    }
    else
    {
        if (c>d)
        {
            printf("The maximum value is=%d",c);
        }
        else
        {
            printf("The maximum value is=%d",d);
        }
        
    }

    return 0;

}