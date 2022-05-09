#include<stdio.h>
#include<stdlib.h>

void Sum(int a, int b);
int main()
{
    Sum(5,7);
}
void Sum(int x, int y)
{
    int sum=0;
    sum = x+y;
    printf("Sum = %d\n", sum);
}

