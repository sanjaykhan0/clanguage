#include<stdio.h>
main(){
    char name[]="HELLO WORLD";
    
    
    for (int i = 0; name[i] !=NULL; i++)
    {
        if (name[i] >='A'&& name[i] <='Z')
        {
            name[i]+=32;
        }
        
    }
    printf("%s",name);
    

}