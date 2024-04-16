#include <stdio.h>
struct students
{
    int id;
    char name[100];
    int age;
    char course[100];
    char city[100];
    char standard[100];
    char school[100];
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

        printf("enter value of course :");
        scanf("%s", &s[i].course);

        printf("enter value of city :");
        scanf("%s", &s[i].city);

        printf("enter value of standard :");
        scanf("%s", &s[i].standard);

        printf("enter value of school :");
        scanf("%s", &s[i].school);
    }
    for (int i = 0; i < n; i++)
    {
        printf("value of id %d\n",s[i].id);
        printf("value of name %s\n",s[i].name);
        printf("value of age %d\n",s[i].age);
        printf("value of course %s\n",s[i].course);
        printf("value of city %s\n",s[i].city);
        printf("value of standard %s\n",s[i].standard);
        printf("value of school %s\n",s[i].school);
    }
}


