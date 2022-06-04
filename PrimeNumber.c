/*
    Author: Benjamin Simon
    Description: Search prime number up to 100
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int primes[50] = {2,3};
    int primeIndex = 2;
    bool isPrime;

    for (int p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (int i = 1; isPrime && p/primes[i]>= primes[i]; ++i)
        {
            if(p%primes[i]==0)
            {
                isPrime=false;
            }
        }

        if(isPrime == true)
        {
            primes[primeIndex]  = p;
            ++primeIndex;
        }

    }

    for (int l = 0; l < primeIndex; l++)
    {
        printf("%d\n", primes[l]);
    }

    return 0;
}