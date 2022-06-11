#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float total;
    float subtotal;
    int year, month;

    float rainfallAmount[5][12]=
    {
        {1.3, 1.5, 1.7, 1.4, 2.7, 2, 1.8, 1.2, 1.9, 3, 1.2, 14},
        {1.3, 1.5, 1.7, 1.4, 2.7, 2, 1.8, 1.2, 1.9, 3, 1.2, 14},
        {1.3, 1.5, 1.7, 1.4, 2.7, 2, 1.8, 1.2, 1.9, 3, 1.2, 14},
        {1.3, 1.5, 1.7, 1.4, 2.7, 2, 1.8, 1.2, 1.9, 3, 1.2, 14},
        {1.3, 1.5, 1.7, 1.4, 2.7, 2, 1.8, 1.2, 1.9, 3, 1.2, 14}
    };

    for (year = 0, total=0; year < 5; ++year)
    {
        for (month = 0, subtotal = 0; month < 12; ++month)
        {
            subtotal  += rainfallAmount[year][month];
        }
        printf("%d %.2f\n", 2010+year, subtotal);
        total += subtotal;       
    }

    printf("Yearly average is %.2f inches\n", total/5);

    for(month=0; month<12; ++month)
    {
        for (year = 0, subtotal = 0; year < 5; ++year)
        {
            subtotal += rainfallAmount[year][month];
        }
        printf("%d %.2f\n", month+1, subtotal/5);
    }
    

    return 0;
}