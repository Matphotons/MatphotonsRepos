#include<stdio.h>
#include<string.h>


int numElement, numElement2, i, j, n;
int main()

{
    int array[10];
    printf("Enter the Elements: ");
    
    for(i=0; i<10; i++)
    {   
        printf("Element: %d - ", i);
        scanf("%d", &array[i]);
        //printf("%d ", array[i]);
    }
    printf("Elements in Array are:");
    for(i=0; i<10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
