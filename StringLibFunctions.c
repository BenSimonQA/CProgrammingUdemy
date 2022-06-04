/*
    Author: Benjamin Simon
    Description: Learn to use string library
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char result[50],const char str[50]);
void bubble(char a[3][50]);

int main()
{
    char resultRev[50];
    char str1[50];
    char cmp[3][50];
    strcpy(cmp[0],"zero");
    strcpy(cmp[1],"one");
    strcpy(cmp[2],"two");

    printf("Add string to reverse: ");
    scanf("%s",str1);

    reverse(resultRev,str1);
    printf("%s\n",resultRev);

    bubble(cmp);
    printf("\nBubble sort:\n");
    printf("%s\n%s\n%s\n",cmp[0],cmp[1],cmp[2]);



    return 0;
}

//Reverse a String
void reverse(char result[50], const char str[50])
{
    int length = strlen(str) - 1;
    int index;

    for(index=0;length>=0;++index,--length)
    {
        result[index]=str[length];
    }
}

//Bubble sort array of string
void bubble(char a[3][50])
{
    int i,j;
    char temp[50];
    for(i=0;i<3;++i)
    {
        for(j=i+1;j<3;++j)
        {
            if((strcmp(a[i],a[j]))>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
}