#include <stdio.h>

int main()
{
    char name[50];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello %s.\n", name);
}