#include<stdio.h>
int main()
{
    int array[10];
    int i, high, total;

    
    for(i=0; i<10; i++)
    {
        printf("\nEnter value: %d : ", i+1);
        scanf("%d", &array[i]);
    }
         high = array[0];
        for(i=0; i<10; i++)
        {
            if (array[i] > high)
            high = array[i];
        }

        printf("\nHighest value entered was %d ", high);
        for(i=0, total=0; i<10; i++)
            total = total + array[i];
            printf("\nThe average of the elements of array is %d \n", total/i);
    return 0;
}