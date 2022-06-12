/*
    Author: Benjamin Simon
    Description: Learn how to use structures with pointers and functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *object);
void printItem(struct item *object);

int main()
{
    struct item object;
    struct item *pObject = &object;

    pObject->itemName=(char*)malloc(sizeof(char)*50);

    if(pObject==NULL)
    {
        exit(-1);
    }

    readItem(pObject);
    printItem(pObject);

    free(pObject->itemName);

    return 0;
}

void readItem(struct item *const object)
{
    printf("Reading in item details:\n");
    printf("Item Name: ");
    scanf("%s", object->itemName);
    object->itemName = (char*)realloc(object->itemName, sizeof(char)*(strlen(object->itemName)+1));
    if(object->itemName==NULL)
    {
        exit(-1);
    }
    printf("Quantity: ");
    scanf("%d", &object->quantity);
    printf("Price: ");
    scanf("%f", &object->price);
    object->amount = (object->price)*(float)(object->quantity);
}

void printItem(struct item *const object)
{
    printf("Item Name: %s\n", object->itemName);
    printf("Quantity: %d\n", object->quantity);
    printf("Price: %.2f\n", object->price);
    printf("Total: %.2f\n", object->amount);
}