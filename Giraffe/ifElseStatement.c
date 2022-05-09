#include <stdio.h>
void main()
{
    int numb, res;
    printf("Enter a number: ");
    scanf("%d", &numb);
    res = numb % 2;
    if (res == 0)
        printf("the number is Even");
    else
        printf("The number is odd");
}