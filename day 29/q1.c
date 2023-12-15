#include <stdio.h>
struct student
{
    int id;
    char name[50];
    int age;
    char course[50];
    char city[50];
    int standard;
    char school[50];
};
int main()
{
    struct student s[50];

    for (int  i = 1; i <=3; i++)
    {
        printf("\nenetr %d's student detail \n",i);

    printf("Enetr id :");
    scanf("%d",&s[i].id);

     printf("Enetr name :");
    scanf("%s",&s[i].name);

     printf("Enetr age :");
    scanf("%d",&s[i].age);

     printf("Enetr course :");
    scanf("%s",&s[i].course);

     printf("Enetr city :");
    scanf("%s",&s[i].city);

     printf("Enetr standard :");
    scanf("%d",&s[i].standard);

     printf("Enetr school :");
    scanf("%s",&s[i].school);
    printf("\n");

    }

    for (int  i = 1; i <=3; i++)
    {
        printf("\n%d's detail is :\n",i);
         printf("Stdunet's id is  :%d",s[i].id);
         printf("\nname of student :%s",s[i].name);
         printf("\nStdunet's age is  :%d",s[i].age);
         printf("\nStdunet's course is  :%s",s[i].course);
         printf("\nStdunet's city is  :%s",s[i].city);
         printf("\nStdunet's standard is  :%d",s[i].standard);
         printf("\nStdunet's school is  :%s",s[i].school);
         printf("\n");

    }
    
    

}
