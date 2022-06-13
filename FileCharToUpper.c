/*
    Author: Benjamin Simon
    Description: Convert char to uppercase in file
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *ptr = NULL;
    FILE *wptr = NULL;
    char c = ' ';
    char str[60];


    ptr=fopen("Text.txt", "r");

    if(ptr==NULL)
    {
        printf("Error!");
        return -1;
    }


    wptr=fopen("Upper.txt", "w+");

    if(wptr==NULL)
    {
        printf("Error!");
        return -1;
    }

    while((c=fgetc(ptr))!=EOF)
    {
        if(islower(c))
        {
            c=c-32;
        }
        fputc(c, wptr);
    }

    fclose(ptr);
    fclose(wptr);

    wptr=fopen("Upper.txt", "r");

    while((c=fgetc(wptr))!=EOF)
    {
        printf("%c",c);
    }
    printf("\n");

    fclose(wptr);
    remove("Upper.txt");

    return 0;
}