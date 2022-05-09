#include <stdio.h>

int main()
{
    int x, y, result;
    char op;
    
    
    printf("\n Enter value for x an y:   ");
    scanf("%d %d", x, y);

    scanf("%c", &op);
   // op = '/';

switch(op)
{
    case '*':
            result = x * y;
            printf("\n The result after multipliation: %d\n", result);
            break;
    
  // case '+':
      //      result = x + y;
       //     printf("\n The result after Addition: %d", result);
         //   break;

    case '+':
            result = x + y;
            printf("\n The result after  addition: %d\n", result);
            break;
    
    case '/':
            result = y / x;
            printf("\n The result After Divsion: %d\n", result);
            break;

    default:
             printf("\n Invalid\n");
            break;
}

return 0;
}