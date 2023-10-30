// find maximum value using 6 variable //
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;

    printf("Enetr first digit=");
    scanf("%d",&a);


    printf("Enetr second digit=");
    scanf("%d",&b);


    printf("Enetr third digit=");
    scanf("%d",&c);

    
    printf("Enetr fourth digit=");
    scanf("%d",&d);

    
    printf("Enetr fifth digit=");
    scanf("%d",&e);

    
    printf("Enetr sixth digit=");
    scanf("%d",&f);


    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                {
                    if (a>f)
                    {
                        printf("The maximum value is=%d",a);
                    }
                    else
                    {
                      printf("The maximum value is=%d",f);  
                    }
                    
                }
                else
                {
                     printf("The maximum value is=%d",e);
                }
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
            if(b>e)
            {
                if(b>f)
                {
                    printf("The maximum value is=%d",b);
                }
                else
                {
                    printf("The maximum value is=%d",f);
                }
            }
            else
            {
                 printf("The maximum value is=%d",e);
            }
        }
        else
        {
             printf("The maximum value is=%d",d);
        }
    } 

    else if(c>d) 
    {
        if(c>e)
        {
            if(c>f)
            {
                printf("The maximum value is=%d",c);
            }
            else
            {
                printf("The maximum value is=%d",f);
            }
        }
        else
        {
             printf("The maximum value is=%d",e);
        }
    }
    else if(d>e)
    {
        if(d>f)
        {
            printf("The maximum value is=%d",d);
        }
        else
        {
            printf("The maximum value is=%d",f);
        }
    }
    else
    {
        if (e>f)
        {
            printf("The maximum value is=%d",e);
        }
        else
        {
            printf("The maximum value is=%d",f);
        }
        
    }
}