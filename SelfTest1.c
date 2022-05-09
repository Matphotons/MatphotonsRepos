#include<stdio.h>
int main()
{
    int array[20];
    int i, N;
    printf("Enter your Elements: ");
    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
    printf("array[%d] =  ", i);
    scanf("%d", array+i);
    }
    printf("\n");

    for(i=0; i<N; i++)
    {
        printf("array[%d] = %d\n" , i, *(array+i));
    }
    printf("\n");
    return 0;
}