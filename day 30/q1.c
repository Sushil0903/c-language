#include <stdio.h>
int main()
{
    FILE *first=fopen("first.txt","r");
    char data[100];
     FILE *s=fopen("second.txt","w");

    

     while(fgets(data,20,first)!=NULL)
     {
        fputs(data,s);
     }

     fclose(first);
     fclose(s);

}