/*
    Author: Benjamin Simon
    Description: Learn how to count how many lines a file has
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int count = 1;
    char c;
    FILE *ptr = NULL;
    ptr= fopen("Text.txt", "r");

    if(ptr==NULL)
    {
        printf("Error!");
        exit(-1);
    }

    while((c=fgetc(ptr))!= EOF)
    {
        if(c=='\n')
        {
            count++;
        }
    }

    printf("There are %d line%c in this file.\n", count, (count>1?'s':' '));

    fclose(ptr);
    ptr=NULL;

    return 0;
}