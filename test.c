/*  
    Author: Benjamin Simon
    Purpose: Calculate area and perimiter of a rectangle
*/

#include<stdio.h>

int main()
{
    //Init variables
    double width=2.0, height=4.0, area=0.0, perimiter=0.0;

    //Calculate perimiter and area
    perimiter = 2.0*(width+height);
    area = width*height;

    //Print results
    printf("Area: %.1f, Perimiter: %.1f", area, perimiter);

    return 0;
}