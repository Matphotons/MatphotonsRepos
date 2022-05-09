#include <stdio.h>
#define N 5
int main()
{
    int  a[N], b[N], i;
    printf("Enter %d integer number\n", N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
        printf("\n\nCoping element of array to b\n");

        for(i=0; i<N; i++)
        {
        b[i]= a[i];
        }
        printf("\nOriginal (a[%d]  --> copy(b[%d])\n",N, N);
        for(i=0; i<N; i++)
        {
        printf("%d\t\t-->%d\n", a[i], b[i]);
        }
    return 0;
}