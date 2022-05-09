#include <stdio.h>
int main()
{
    int x;
    printf("\nEnter the Character x: ");
    scanf("%c", &x);

    if((x>= 'a' && x<= 'z') || (x>='A' && x<= 'Z'))
    {
        printf("\n%c is an AlpahbetC\n ", x);
    }

    else if(x<=0 || x>=0)
    {
        printf("\n%c is a Digit Number\n", x);
    }

    else
    {
        printf("\n%c is a Special character\n ", x);
    }

    return 0;
}