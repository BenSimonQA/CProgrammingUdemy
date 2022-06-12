#include <stdio.h>

int length(const char *pointer);

int main()
{
    char str[50];
    printf("Type:");
    scanf("%s",str);

    printf("Length is %d\n", length(str));

    return 0;
}

int length(const char *pointer)
{
    int result = 0;
    while(*pointer)
    {
        result++;
        pointer++;
    }

    return result;
}