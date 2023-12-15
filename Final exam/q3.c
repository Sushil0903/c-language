//  wap to write leap year in text file 
#include <stdio.h>
int main()
{
    int f,l;
    printf("Enter first year of rang :");
    scanf("%d",&f);
    printf("Enter last year of range :");
    scanf("%d",&l);
    FILE *leap=fopen("leap_year.txt","w");


    for (int  i = f; i <=l; i++)
    {
        if (i%4==0)
        {
            fprintf(leap,"%d ",i);

        }
    }
    fclose(leap);
    
}