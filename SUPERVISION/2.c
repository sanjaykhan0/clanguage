#include <stdio.h>
struct student
{
    int id;
    char company[100];
    char model[100];
    int year;
    char color[100];
    int price;
    float mileage;

} a[100];

main()
{

    int n;
    printf("enter BOOKS :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter id \n");
        scanf("%d", &a[i].id);

        printf("enter company \n");
        scanf("%s", &a[i].company);

        printf("enter model \n");
        scanf("%s", &a[i].model);

        printf("enter year\n");
        scanf("%d", &a[i].year);

        printf("enter color\n");
        scanf("%s", &a[i].color);

        printf("enter price\n");
        scanf("%d", &a[i].price);

        printf("enter mileage\n");
        scanf("%f", &a[i].mileage);
    }

    for (int i = 0; i < n; i++)
    {

        printf("book_id :%d\n", a[i].id);
        printf(" car_company :%s\n", a[i].company);
        printf(" car_model :%s\n", a[i].model);
        printf(" car_year :%d\n", a[i].year);
        printf("car_color :%s\n", a[i].color);
        printf(" car_price :%d\n", a[i].price);
        printf("car_mileage : %2f\n", a[i].mileage);
    }
}