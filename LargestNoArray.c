#include<stdio.h>
void LargestNumArray()
{
    int Array[100];
    int i, n;
    printf("Enter the number of element n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter number: %d =  ", i);
        scanf("%d", &Array[i]);
    }

    for(i=0; i<n; i++)
    {
        if(Array[0]<Array[i])
        {
            Array[0] = Array[i];
        }
    }
    printf("The Largest Element is: %d ", Array[0]);
}
    int main()
    {
        LargestNumArray();
        printf("\n");
        LargestNumArray();
        printf("\n");
   }

