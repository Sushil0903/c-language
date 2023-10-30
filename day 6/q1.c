// find minium value using 3 variable //
#include <stdio.h>
int main()
{

    int a,b,c;
    printf("enetr first digit=");
    scanf("%d",&a);

    printf("enetr second digit=");
    scanf("%d",&b);
   
    printf("enetr third digit=");
    scanf("%d",&c);
     

     if(a<b)
     {
         if(a<c)
         {
            printf("the minium value is=%d",a);
         }
         else{
            printf("the minium value is=%d",c);
         }
     }
     else
     {  
        if(b<c)
        {
           printf("the minium value is=%d",b); 
        }
        else
        {
            printf("the minium value is=%d",c);
        }
     }
    
}