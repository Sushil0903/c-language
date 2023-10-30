// convert temperature celsius inrto fahrenheit
#include <stdio.h>
int main()
{   
    float c,f;
    printf("enetr the temperature in celsius=");
    scanf("%f",&c);

    f=(c*9/5)+32;

    printf("temperature in fahrenheit=%.2f",f);
    return 0;
}