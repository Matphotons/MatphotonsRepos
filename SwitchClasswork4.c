#include <stdio.h>
int main()
{

    int x;
    printf("Enter the values of x: \n", x);
    scanf("%d", &x);


    switch(x%2==0)
    
    {
        case 1:
            printf("The number is even\n");
            break;
        case 0:
        printf("The number is odd\n");
        break;
    }
    
    return 0;
}