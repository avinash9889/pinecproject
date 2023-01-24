#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    char ch;
    char str[50]="string";
    FILE *fp;
    if(fp==NULL)
    {
        printf("NO file");
        exit(1);    
    }
    fp=fopen("main.txt","r");
    ch=fgetc(fp);
    printf("%c",ch);
    fclose(fp);
    return 0;
}
