//file reader
#include <stdio.h>

void main() {
    FILE *fp;
    char content[100];
    char fileName[20] = "connector.txt";

    fp = fopen(fileName,"r");
    while (fscanf(fp,"%s",content) != EOF) 
    printf("%s ",content);
     fclose(fp);
   
   
}
 
