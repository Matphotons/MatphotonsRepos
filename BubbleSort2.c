#include<stdio.h>
void main()
{
    int a[] = {11,33,77,10,22,44,99,55,88,66};
    int i, j, temp;
    

    for(int i=8; i>=0; i--)
    {
        for(int j=0; j<9-i; j--)
        {
            if(a[j]<a[j-1])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    printf("\nThe Sorted Array is:  \n");
    for(i=0; i<10; i++)
    {
        printf("\na[%d] = %d", i, a[i]);

    }
    
}
