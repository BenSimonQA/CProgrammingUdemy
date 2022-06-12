/*
    Author: Benjamin Simon
    Description: Learning how to declare and initialize structs
*/

#include <stdio.h>

struct employee
{
    char name[50];
    int hireDate;
    float salary;
};


int main()
{
    char letter = 'c';

    struct employee person1 = {"Peter", 11, 30000.00f};

    printf("My name is %s i was hire on the %d and my salary is %.2f\n", person1.name, person1.hireDate, person1.salary);

    scanf("%s %d %f", person1.name, &person1.hireDate, &person1.salary);

    printf("My name is %s i was hire on the %d and my salary is %.2f\n", person1.name, person1.hireDate, person1.salary);

    return 0;
}