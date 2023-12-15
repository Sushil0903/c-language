#include <stdio.h>
struct student
{
    int Rollno;
    char name[50];
    int Chemistry;
    int Mathematics;
    int Physics;

};
int main()
{

    struct student s[20];
    float t;
    for (int  i = 1; i <=5; i++)
    {
        printf("Enter detail of student %d\n",i);

        printf("Enetr Roll no. :");
        scanf("%d",&s[i].Rollno);
        printf("Enter stdent name :");
        scanf("%s",&s[i].name);
         printf("Enetr mark of Chemistry :");
        scanf("%d",&s[i].Chemistry);
         printf("Enetr mark of Mathematics :");
        scanf("%d",&s[i].Mathematics);
         printf("Enetr mark of Physics :");
        scanf("%d",&s[i].Physics);
        printf("\n");
    }

    for (int  i = 1; i <=5; i++)
    {
       printf("%s (%d)\n",s[i].name,s[i].Rollno);
       printf("Chemistry ==>%d\n",s[i].Chemistry);
       printf("Mathematics ==>%d\n",s[i].Mathematics);
       printf("Physics ==>%d\n",s[i].Physics);
       t=s[i].Chemistry+s[i].Mathematics+s[i].Physics;
       printf("Total ==>%d/300\n",s[i].Chemistry+s[i].Mathematics+s[i].Physics);
       printf("Percentage ==>%.2f%%\n",t*100/300);
       printf("\n");
    }

}