#include<stdio.h>

int main()

{
    int i, j, array[4][5];
    int sum = 0;
    printf("Enter the Elements:\n");
    
    for(i=0; i<4; i++)
    {   for()
    {
        printf("Element: %d - ", j);
        scanf("%d", &array[i][j]);
    }
    
    }
    printf("Elements in Array are:  ");
    for(i=0; i<3; i++)
    {
        printf("%d  ", array[i]);
        
        sum += array[i];
    }
    printf("\n");
    printf("Sum of Array is: %d\n", sum);
    return 0;
}
