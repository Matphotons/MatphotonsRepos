#include <stdio.h>
int main()
{

    int x, y;
    printf("Enter the values of x and y: \n", x, y);
    scanf("%d %d", &x, &y);

    if(x==y)
    {
        printf("Integers X and Y are equal: ", x, y);
    }
    else 
    {
        printf("Integers X and are not Equal \n");
    }
}