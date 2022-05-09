#include <stdio.h>

int main()
{
    int num, i, sum=0;
    printf("Enter the number: ");
    scanf("%d", num);

    printf(" Natural number from 1 to %d", num);

    for(i = 1; i<=num; i++ )
    {
    sum = sum + i;
    printf("\nSum is: %d", sum);

    }

return 0;
}