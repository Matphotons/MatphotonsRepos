#include<stdio.h>
int main()
{   
    int array[100]={0}
    //int array[i], array[j];
    int i, j, n, tmp;
    printf("Enter n: -");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("[%d]\t", i);
        scanf("%d", &array[i]);
    }
    printf("\nDuplicate Element in Array: \n");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i]==array[j])
            {
                printf("%d\n", array[i]);
            }
        }
    }
    return 0;
}