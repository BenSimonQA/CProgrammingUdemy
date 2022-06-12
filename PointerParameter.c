#include <stdio.h>
#include <math.h>

void square(int *const pNum);

int main()
{
    int num;
    printf("Add number: ");
    scanf("%d",&num);

    printf("The square of %d", num);
    square(&num);
    printf(" is %d\n", num);


    return 0;
}


void square(int *const pNum)
{
    *pNum=(*pNum)*(*pNum);
}