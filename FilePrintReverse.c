/*
    Author: Benjamin Simon
    Description: Print a text file in reverse
*/

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    int length = 0;
    int index = 0;

    ptr = fopen("Text.txt", "r");

    if(ptr==NULL)
    {
        printf("Error!");
        return -1;
    }

    fseek(ptr, 0, SEEK_END);
    length = ftell(ptr);

    while(index<length)
    {
        index++;
        fseek(ptr, -index, SEEK_END);
        printf("%c",fgetc(ptr));
    }

    printf("\n");

    fclose(ptr);

    return 0;
}