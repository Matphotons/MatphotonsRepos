#include <stdio.h>
int main()
{
    int i, sum=0, n=0, array[10];
    //printf("Enter the array size n: ");
    //scanf("%d", &n);
    for(i=0; i<10; i++)
    {
        printf("Enter the element: %d - ", i);
        scanf("%d", &array[i]);
    }
    printf("Display the elements of the array: ");
    for(i=0; i<10; i++)
    {
        printf("%d  ", array[i]);
        sum += array[i];
    }
        printf("\nSum is %d\n", sum);
        return 0;
}