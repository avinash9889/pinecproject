#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* ptr;
	char str[50];
    char str1[50]="string";
	ptr = fopen("main.txt", "a+");

	if (NULL == ptr) {
		printf("file can't be opened \n");
	}

	while (fgets(str, 50, ptr) != NULL) {
		printf("%s", str);
        strcmp(str,str1);
        if(strcmp(str,str1)==1)
        printf("%s\n",str1);
        else
        printf("NULL");
	}

	fclose(ptr);
	return 0;
}

