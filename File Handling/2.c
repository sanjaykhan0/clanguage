    #include <stdio.h>
#include <string.h>
main()
{

    FILE *f;
    char data[100];
    f = fopen("b.txt", "w");

    if (f == NULL)
    {
        printf("file cannot open !");
    }
    else
    {
        printf("enter mess : ");

        // while(fgets(data,50,f)!=NULL){
        //     printf("%s",data);
        // }
        gets(data);
        fputs(data,f);
    }
}