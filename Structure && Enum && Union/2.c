#include <stdio.h>
struct students
{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    char experience[100];
    char company_name[100];
} s[100];

main()
{

    int n;
    printf("enter lenth");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("enter value of id :");
        scanf("%d", &s[i].id);

        printf("enter value of name :");
        scanf("%s", &s[i].name);

        printf("enter value of age :");
        scanf("%d", &s[i].age);

        printf("enter value of role :");
        scanf("%s", &s[i].role);

        printf("enter value of city :");
        scanf("%s", &s[i].city);

        printf("enter value of experience :");
        scanf("%s", &s[i].experience);

        printf("enter value of company_name :");
        scanf("%s", &s[i].company_name);
    }
    for (int i = 0; i < n; i++)
    {
        printf("value of id %d\n",s[i].id);
        printf("value of name %s\n",s[i].name);
        printf("value of age %d\n",s[i].age);
        printf("value of role %s\n",s[i].role);
        printf("value of city %s\n",s[i].city);
        printf("value of experience %s\n",s[i].experience);
        printf("value of company_name %s\n",s[i].company_name);
    }
}


