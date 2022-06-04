#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes = 0;
    double minutesYear = 0.0;
    double years = 0.0;
    double days = 0.0;

    minutesYear = 60*24*365;

    printf("How many minutes?\n");
    scanf("%d", &minutes);

    years =  (minutes / minutesYear);
    days =  (minutes/60.0/24.0);

    printf("%d minutes is aproximately %f years and %f days", minutes, years, days);

    return  0;
}