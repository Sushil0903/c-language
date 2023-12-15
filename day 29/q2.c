#include <stdio.h>
struct student
{
    int id;
    char name[50];
    int age;
    char role[50];
    char city[50];
    int exe;
    char companyname[50];
};
int main()
{

    struct student s[50];
    
    int n;
    printf("enetr no. of employ");
    scanf("%d",&n);

    for (int  i = 1; i <=n; i++)
    {
        printf("enetr %d's employ detail :\n",i);

     printf("Enetr id :");
    scanf("%d",&s[i].id);

     printf("Enetr name :");
    scanf("%s",&s[i].name);

     printf("Enetr age :");
    scanf("%d",&s[i].age);

     printf("Enetr role in company :");
    scanf("%s",&s[i].role);

     printf("Enetr city :");
    scanf("%s",&s[i].city);

     printf("Enetr experinace :");
    scanf("%d",&s[i].exe );

     printf("Enetr company name  :");
    scanf("%s",&s[i].companyname);
    printf("\n");
    
    }

    for (int  i = 1; i <=n; i++)
    {
        
         printf("\n%d's detail is :\n",i);
         printf("employ's id is  :%d",s[i].id);
         printf("\nname of empolay's :%s",s[i].name);
         printf("\nEmpolay's age is  :%d",s[i].age);
         printf("\nEmpolay's role is  :%s",s[i].role);
         printf("\nEmpolay's city is  :%s",s[i].city);
         printf("\nEmpolay's experinace is  :%d",s[i].exe);
         printf("\nEmpolay's company is  :%s",s[i].companyname);
         printf("\n");

    }
    
    
}