#include <stdio.h>

int arraySum(int *array, const int n);

int main()
{
    int values[10]={3,7,-9,3,6,-1,7,9,1,-5};

    printf("%d", arraySum(values,10));

    return 0;
}

int arraySum(int *array, const int n)
{
    int sum=0;
    int *const arrayEnd=array+n;
    printf("arrayend %d\n",arrayEnd);
    for(;array<arrayEnd;++array)
    {
        printf("array %d\n",array);
        sum+=*array;
    }

    return sum;
}