#include <stdio.h>
void main()
{
    static int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;


    for(i=0; i<10; ++i)
    {
     printf("\n i=%d, array[%d]=%d, *(array + i)=%d", i, i, array[i], *(array + i));
    
    }
printf("\n");
}