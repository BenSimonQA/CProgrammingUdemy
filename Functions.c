/*
    Author: Benjamin Simon
    Description: Use of functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int gcd(unsigned int a, unsigned int b)
{
    int result = 0;

    if(a==0)
    {
        result=b;
    }
    if(b==0)
    {
        result = a;
    }

    while (a!=0 && b!=0)
    {
        result=b;
        b=a%b;
        a=result;
    }

    return result;
}

float abso(float x)
{
    if(x < 0)
    {
        x = -x;
    }

    return x;
}

float squareRoot(float x)
{
    x = abso(x);
    x = sqrt(x);

    return x;
}

int main()
{
    int resultGCD =  gcd(270,192);
    printf("Answer: %d\n", resultGCD);

    float resultAbs =  abso(-20.4);
    printf("Answer: %.2f\n", resultAbs);

    float resultSqrt = squareRoot(-4);
    printf("Answer: %.2f\n", resultSqrt);

    return 0;
}