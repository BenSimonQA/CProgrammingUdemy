#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    
    int limit=0;
    
    printf("Enter limit for string: ");
    scanf("%d",&limit);
    
    char *str = (char *) malloc(limit*sizeof(char));
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("You wrote %s with limit of %d\n", str, limit);
    
    free(str);

    char testStr[3];
    scanf("%s",  testStr);
    printf("You  wrote %s in length 3", testStr);
    
    return 0;
}
