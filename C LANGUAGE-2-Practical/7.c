#include<stdio.h>
#include<string.h>
main(){

FILE *f;
char data[100];
f=fopen("d.txt","r");

if(f==NULL){
    printf("file cannot open !");

}
else{
    printf("file open \n");
    
}
while(fgets(data,50,f)!=NULL){
    printf("%s",data);
}

}