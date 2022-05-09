#include<stdio.h>
void main()
{
    int i, j, temp, a[5]={22,65,10,5,12};
    for(i=3; i>=0; i--)
    {
        for(j=4; j>=4-i; j--)
        {
            if(a[j]>a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    printf("\nThe sorted Array is:");
    for(i=0; i<5; i++)
    {
        printf("\n%d", a[i]);
    }
    printf("\n");
}