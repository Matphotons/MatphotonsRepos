#include <stdio.h>
int main()
{

    int x;
    printf("Enter the values of x: \n");
    scanf("%i", &x);

    if(x > 0)
    {
        printf("\nIntegers X is a positive number" );
    }
    else if(x < 0)
    {
        printf("\nIntegers X a negative number");
    }
    else 
    {
        printf("\nInteger X is equal Zero");
    }
    
}