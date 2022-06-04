#include <stdio.h>

#define HourlyRate 12.0
#define Taxes_300 0.15
#define Taxes_450 0.20
#define Taxes_Exceed 0.25


int main()
{
    int hours = 0;
    //double basic = 12.0;
    double grossPay = 0.0;
    double taxes =  0.0;
    double netPay = 0.0;

    printf("How many hours you worked?\n");
    scanf("%d", &hours);

    if(hours > 40)
    {
        grossPay = ((hours-40)*(HourlyRate * 1.5));
        grossPay += 40 * HourlyRate;
    }
    else
    {
        grossPay += hours * HourlyRate;
    }

    if(grossPay <= 300)
    {
        taxes = grossPay * Taxes_300;
    }
    else if (grossPay >300 && grossPay <= 450)
    {
        taxes = 300 * Taxes_300;
        taxes += (grossPay-300) * Taxes_450;
    }
    else if (grossPay > 450)
    {
        taxes = 300 * Taxes_300;
        taxes += 150 * Taxes_450;
        taxes += (grossPay - 450) * Taxes_Exceed;
    }

    netPay = grossPay - taxes;

    printf("Your gross pay is %.2lf, your taxes is %.2lf and your net pay is %.2lf", grossPay, taxes, netPay);

    return 0;
}