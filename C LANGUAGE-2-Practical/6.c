#include <stdio.h>
struct students
{
    int id;
    char company_name[100];
    char color[100];

    char model[100];
    int price;

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

        printf("enter value of company_name :");
        scanf("%s", &s[i].company_name);

        printf("enter value of color :");
        scanf("%s", &s[i].color);

       

        printf("enter value of model :");
        scanf("%s", &s[i].model);

         printf("enter value of price :");
        scanf("%d", &s[i].price);
    }
    for (int i = 0; i < n; i++)
    {
        printf("value of id %d\n", s[i].id);
        printf("value of name %s\n", s[i].company_name);
       
        printf("value of color %s\n", s[i].color);
        printf("value of model %s\n", s[i].model);
         printf("value of price %d\n", s[i].price);
        
    }
}
