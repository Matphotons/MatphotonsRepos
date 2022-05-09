#include <stdio.h>
int main()
{
    int i, array[5], sum=0;
    printf("Enter the element \n" );

    for(i=5; i>=1; --i)
    {
        printf("element - %d : ", i);
        scanf("%d", array + i);
    }

    for(i=5; i>=1; --i)
    {
        printf("%d  ", *(array + i));
        sum += *(array + i);
    }
    printf("\n");
    printf("\nThe Sum of array is : %d \n", sum);
    
    return 0;
}