#include <stdio.h>
int main()
{
    int array[100], i, total, high, low, N;
    printf("Enter the number of element n: ");
    scanf("%d", &N);
printf("Enter values equall N: ");
for(i=0; i<N; i++)
{
    //printf("Enter a value: " );
    scanf("%d", &array[i]);
}
    //printf("\n");

    high =array[0];
    low = array[0];

    for(i=0; i<N; i++)
    {
        if(array[i]>high)
        high = array[i];
    }
    printf("Highest value entered was %d \n", high);
    for (i=0; i<N; i++)
    {
        if(array[i]<low)
        low = array[i];
    }
    printf("Lowest value entered is: %d\n", low);
    return 0;
}
