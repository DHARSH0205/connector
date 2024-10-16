#include <stdio.h>


void main() {

    FILE *fp;
    char stt[50];
    fp = fopen("first.txt","a");
    fprintf(fp,"hei");
    fclose(fp);
    if (fp == NULL) 
    printf("file does not exists\n");
    else 
    printf("file exists\n");
    fopen("first.txt","r");

   while ( fscanf(fp,"%s",stt) != EOF) {
    printf("%s ",stt);
   }
    fclose(fp);
}