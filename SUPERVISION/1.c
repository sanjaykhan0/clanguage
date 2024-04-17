#include<stdio.h>
struct student
{
    int id;
    char title[100];
    char author[100];
    char genre[100];
    char  publisher[100];
    int year;
    int price;

}a[100];



main(){

int n;
printf("enter BOOKS :");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter id \n");
    scanf("%d",&a[i].id);

     printf("enter title \n");
    scanf("%s",&a[i].title);

     printf("enter author \n");
    scanf("%s",&a[i].author);

     printf("enter genre\n");
    scanf("%s",&a[i].genre);

     printf("enter publisher\n");
    scanf("%s",&a[i].publisher);

     printf("enter year\n");
    scanf("%d",&a[i].year);
    
     printf("enter price\n");
    scanf("%d",&a[i].price);
}

for(int i=0;i<n;i++){
   
    printf("book_id :%d\n",a[i].id);
    printf(" book_title :%s\n",a[i].title);
     printf(" book_author :%s\n",a[i].author);
      printf("book_genre :%s\n",a[i].genre);
       printf("book_publisher : %s\n",a[i].publisher);
       printf(" book_publication_year :%d\n",a[i].year);
       printf(" book_price :%d\n",a[i].price);
}
}