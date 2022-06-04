#include <stdio.h>

int main()
{
    enum weekdays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    enum weekdays example = Wednesday;

    if(example =  Tuesday)
    {
        printf("%d", example);
    }
    else
    {
        printf("NO!");
    }

    return 0;
}