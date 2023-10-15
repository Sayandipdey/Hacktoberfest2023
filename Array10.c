#include <stdio.h>
int main() 
{
    int digits[ARRAY_S];
    int i;
    printf("Enter 10 digits:    \n");
    for (i = 0; i < ARRAY_SIZE; i++) 
     {
        printf("Enter digit %d: ", i + 1);
        scanf("%d", &digits[i]);
     }
    printf("You entered the following digits:\n");
    for (i = 0; i < ARRAY_SIZE; i++) 
{
        printf("%d ", digits[i]);
    }

    return 0;
}
