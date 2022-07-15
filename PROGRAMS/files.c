#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = ("hello  files.c \n");
ptr = fopen("hello.txt", "a");
fprintf(ptr, "%s", string);
return 0;
}