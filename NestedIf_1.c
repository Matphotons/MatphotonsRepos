#include <stdio.h>

int main()
{

     int x, y;
     x = y = 0;

     printf("Enter choice (1 - 3) :");
     scanf("%d", &x);

     if(x >= 1 || x <= 3)
     {
        printf("\nEnter value for y (1 -5):\n");
        scanf("%d", &y);
        if(y <= 5)
            printf("\nThe value for y is: %d\n", y);
         else
            printf("\nThe value of y exceeds 5\n");

     }
     else
     {
        printf("\nChoice entered was not 1\n");
     }
    
   return 0;
       
}