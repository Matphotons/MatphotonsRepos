#include<stdio.h>
int main()
{
    int i=1, j=1, max=1;
    printf("Enter the value of max: ");
    scanf("%d", &max);
    for(i=1; i<=max; i++)
    {
        printf("\nMultipliation table: %d\n", i);
        for(j=1; j<=max; j++)
        {
        printf("%d * %d =  %d \n", i, j, i*j );
        }
    }
         printf("\n");
    return 0;
}