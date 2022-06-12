#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;
    int *pnum = &num;
    printf("Value of what pointer points too: %d\n", *pnum);
    *pnum+=5;

    printf("Address of pointer: %p\n", &pnum);
    printf("Address of num: %p\n", &num);
    printf("Value of pointer: %p\n", pnum);
    printf("Value of what pointer points too: %d\n", *pnum);

    int value=100;
    int example=200;
    const int *pvalue=&value;
    printf("Value of p  is %d\n",*pvalue);
    printf("Value of value  is %d\n",value);
    value+=5;
    printf("Value of p  is %d\n",*pvalue);
    printf("Value of value  is %d\n",value);
    pvalue=&example;
    //*pvalue+=20;
    printf("Value of p  is %d\n",*pvalue);
    printf("Value of value  is %d\n",value);


    return 0;
}