#include <stdio.h>
int main()
{
    int i, array[5];
    printf("Enter the element\n" );

    for(i=0; i<5; ++i)
    {
        printf("array[%d]:-", i);
        scanf("%d", array + i);
    }

    for(i=0; i<5; ++i)
    {
        printf("%d  ", array + i);
    }
    printf("\n");

    for(i=0; i<5; ++i)
    {
         printf("%d  ", *(array + i));
    }
    printf("\n");
    return 0;
}