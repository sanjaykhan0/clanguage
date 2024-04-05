#include<stdio.h>
#include<string.h>
main (){
  
    char s[100],k[100],full[100];
    gets(s);
    gets(k);

    strcpy(full,strcat(s,k));
    puts(full);
}