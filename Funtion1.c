#include <stdio.h>
#include <math.h>
void SwapVar()
{
    int num1, num2, num3=0, num4=0;
    printf("Enter numbers: num1 and num2 \n");
    scanf("%d, %d", &num1, &num2);
    printf("num1=%d, num2=%d\n", num1, num2);
    num3 = num1;
    num4 = num2;
    num1 = num4;
    num2 = num3;
    printf("num1= %d and num2= %d\n", num1, num2);

}
void Addition()
{
    int a, b, add = 0;
    printf("pls input your first number:\n ");
    scanf("%d", &a);
    printf("pls input your second number: \n");
    scanf("%d", &b);
    add = a + b;
    printf("the sum of 2 number is %d\n", add);
}
void SquareRoot()
{
    int x, sqr=0;
    printf("Enter the number x to get the Square root: \n");
    scanf("%d", &x);
    sqr = sqrt(x);
    printf("The Square root of x = %d is = %d \n", x, sqr);
}
void AreaOfRect()
{
    int l, h, area = 0;
    printf("Enter the lenght Rectangle:\n ");
    scanf("%d", &l);
    printf("Enter the height of Rectangle: \n");
    scanf("%d", &h);
    area = l*h;
    printf("The Area of Rectangle is: %d", area);
}
int main()
{   
    SwapVar();
    printf("\n");
    Addition();
    printf("\n");
    SquareRoot();
    AreaOfRect();
    printf("\n");
    printf("Hello do one more \n");
    printf("\n");
    Addition();
    printf("\n");
    SquareRoot();
}