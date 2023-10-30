// gross salary //
#include <stdio.h>
int main()
{
     int s;
     int hra;
     int da;
     int ta;

     printf("enetr your salary=");
     scanf("%d",&s);

     printf("enetr hra=");
     scanf("%d",&hra);

     printf("enetr da=");
     scanf("%d",&da);

     printf("enetr ta=");
     scanf("%d",&ta);

     printf("total salary=%d",s+s*hra/100+s*da/100+s*ta/100);


}