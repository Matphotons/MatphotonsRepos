#include <stdio.h>
int main()
{

    int x;
    printf("Enter the values of x: \n", x);
    scanf("%d", &x);


    switch(x%2==0)
    
    {
        case 1:
            printf("The number is even %d\n",x );
            break;
        case 0:
        printf("The number %d is odd\n ", x);
        break;
    }
    
    return 0;
}