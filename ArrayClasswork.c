#include<stdio.h>
#include<string.h>


int numElement, numElement2, i, n;
int main()

{
    
    int array[10];

    
    printf("Enter the Elements: ");

    scanf("%d", &array[10]);
    numElement = sizeof(array)/sizeof(array[0]);
    printf("The number of Elements is:%d \n", numElement);
    //numElement2 = sizeof(array2)/sizeof(array2[0]);
   //printf("The number of Element in 2nd array is: %d\n", numElement2);
    
   /* for(i=0; i<12; ++i)
    {
        printf("%d  ", array2[i]);
    }
printf("\n");*/
    for(i=0; i<10; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
    return 0;
}
