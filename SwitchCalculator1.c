#include <stdio.h>
#include <conio.h>
void main()
{

    float x, y, z;
    char operator;
    //clrscr();
    printf("Enter the operator (+, -, *, /): \n");
    scanf("%c", &operator);

    printf("Enter 1st number:\n ");
    scanf("%f", &x);

    printf("Enter 2nd Number: \n");
    scanf("%f", &y);

    for(i = 1; i<=2; i++)

    {
        
    switch(operator)
    
    {
        case '+': z = x + y;
            printf("The sum  is: \n", z);
            break;
        case '-': z = x - y;
        printf("The minus is: %f\n", z);
        break;

        case '*': z = x * y;
        printf("The multiplication is:%f\n ", z);
        break;

        case '/': z = x / y;
        printf("The division is: %f\n", z);
        break;
        default:
        printf("Operator not included: \n");

    }
    getch();
    //return 0;
}