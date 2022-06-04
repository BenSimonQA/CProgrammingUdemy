#include <stdio.h>

int main()
{

    printf("Byte size of int: %d\n", sizeof(int));
    printf("Byte size of char: %zd\n", sizeof(char));
    printf("Byte size of long: %zd\n", sizeof(long));
    printf("Byte size of long long: %zd\n", sizeof(long long));
    printf("Byte size of double: %zd\n", sizeof(double));
    printf("Byte size of long double: %zd\n", sizeof(long double));


    return 0;
}