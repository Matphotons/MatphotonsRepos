#include<stdio.h>
int main()
{
    int i=0, j=0, max=0;
    printf("Enter the value of i and max: ");
    scanf("%d, %d ", &i, &max );
    
    for(j=1; j<=max; j++)
    {
        printf("%d * %d =  %d ", i, j, i*j );
    }

    return 0;
}