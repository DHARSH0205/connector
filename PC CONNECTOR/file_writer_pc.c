//file writer 

#include <stdio.h>

void main() {
    char content[100];
    FILE *fp;
      fp = fopen("connector.txt","w");
    printf("enter the content you want to write:");

   scanf("%[^\n]%*c",content);
    
    fprintf(fp,"\n%s",content);
}