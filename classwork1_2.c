#include<stdio.h>
int main()
{
    int i, j, max;
    printf("\tPls enter the maximum value:\n");
    printf("for which a table can be printed: ");
    scanf("%d", &max);
    for(i = 0, j = max; i<=max; i++, j--)
    {
        printf("\n%d + %d = %d", i, j, i + j);
        //printf("\n\t\t world. \n");
    }
        //printf("\nLast Number is: %d \n", num);
    return 0;
}