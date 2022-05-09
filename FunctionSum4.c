#include<stdio.h>


void Sum(float, float);
void main()
{
    float a, b;
    printf("Enter a and b:\n");
    scanf("%f %f", &a, &b);
    Sum(a,b);
}
void Sum(float x, float y)
{
   float sum=0;
    sum = x+y;
    printf("Sum = %.2f\n", sum);
}

