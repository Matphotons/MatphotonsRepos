#include <stdio.h>

int main()
{
    int i, num;
    int sum=0;
    printf("Enter the number: ");
   scanf("%i", &num);

   printf(" Natural number from 1 to %i", num);
 
    for(i = 1; i<=num; i++ )
    {
    sum = sum + i;
    printf("\nSum is: %d\n", sum);

    }

return 0;
}