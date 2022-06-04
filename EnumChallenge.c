/*  
    Author: Benjamin Simon
    Purpose: Learn to use enum
*/

#include<stdio.h>

int main()
{
    //Enum decleration
    enum companies {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MINCROSOFT};

    //Value decleration
    enum companies comp1 = XEROX;
    enum companies comp2 = GOOGLE;
    enum companies comp3 = EBAY;

    //Print enum value
    printf("%d\n%d\n%d", comp1, comp2, comp3);

    return 0;
}