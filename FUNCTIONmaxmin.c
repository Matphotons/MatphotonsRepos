#include <stdio.h>
int x, y;
void MaxMin()
{
    printf("Enter the first number x:= ");
    scanf("%d", &x);
    printf("\n");
    printf("Enter the second number:y = ");
    scanf("%d", &y);
    printf("\n");
    if(x>y)
    {
        printf("The first Num X:%d is the Max and the second num Y:%d is the Min\n ", x, y);
    }
    else
    printf("The 2nd Num Y:%d is the Max and the 1st Num X:%d is the Min\n", y, x);
}

int main()
{
    MaxMin();
    printf("\n");
    MaxMin();

}