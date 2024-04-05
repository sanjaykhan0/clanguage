#include<stdio.h>
#include<string.h>
main (){
  
    char s[100],k[100];
    gets(s);
    gets(k);


if(strcmp(s,k) == 0){
	printf("Strings are equal");
}
else{
	printf("No, they are not equal");

    }
}