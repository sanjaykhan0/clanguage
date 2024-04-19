#include <stdio.h>
// #include <string.h>
main()
{

    FILE *f;
    char data[100];
    f = fopen("a.txt", "a");

    if (f == NULL)
    {
        printf("file cannot open !");
    }
    else
    {
        printf("file open \n");

        // while(fgets(data,50,f)!=NULL){
        //     printf("%s",data);
        // }
        gets(data);
        fputs(data,f);
    }
}