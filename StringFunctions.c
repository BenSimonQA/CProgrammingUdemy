/*
    Author: Benjamin Simon
    Description: Learn how to use strings in C
*/
#include <stdio.h>
#include <stdbool.h>

int length(char str[50]);
void concatinate( char result[50], const char str1[50], const char str2[50]);
bool equal(char str1[50], char str2[50]);

int main()
{
    char str1[]  = "Hello, World!";
    char str2[] = "Hello, World!";
    char result[50];
    int strLength = 0;
    bool strEqual;

    strLength = length(str1);
    printf("The length of \"%s\" is %d.\n", str1, strLength);
    strLength = length(str2);
    printf("The length of \"%s\" is %d.\n", str2, strLength);

    concatinate(result,str1, str2);
    printf("The concat word is %s\n", result);

    strEqual=equal(str1, str2);
    if(strEqual?printf("The two words are equal.\n"):printf("The two words are not equal.\n"));

    return 0;
}

int length(char str[50])
{
    int index = 0;

    while(str[index]!='\0')
    {
        ++index;
    }

    return index;
}

void concatinate(char result[50],const char str1[50],const char str2[50])
{
    int i,j;
    
    for(i = 0;str1[i]!='\0';++i)
    {
        result[i] = str1[i];
    }
    for(j = 0;str2[j]!='\0';++j)
    {
        result[i+j] = str2[j];
    }
    result[i+j]='\0';    
}

bool equal(char str1[50], char str2[50])
{
    bool result = false;
    int index;

    if(length(str1)==length(str2))
    {
        int strLength = length(str1);
        for (index = 0; index < strLength; index++)
        {
            if(str1[index]!=str2[index])
            {
                break;
            }
            else if (index == strLength-1 && str1[index] == str2[index])
            {
                result = true;
            }
            
        }
        
    }

    return result;
}