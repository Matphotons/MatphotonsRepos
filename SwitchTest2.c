#include <stdio.h>

int main()
{
    int x, y, z, result;
    char op;
    x=2;
    y=3;
    z=4;
    op1 = '+';
    op2 = '*';
    op3 = '/';

switch(op1)
{
    case '*':
            result = x * z;
            printf("\n The result after multipliation: %d\n", result);
            break;
    default:
    break;
}
  // case '+':
      //      result = x + y;
       //     printf("\n The result after Addition: %d", result);
         //   break;

switch(op2)
  {  
      case '+':
            result = z + y;
            printf("\n The result after second addition: %d\n", result);
            break;
    default:
            break;
  }
   switch(op3) 
    {case '/':
            result = z / x;
            printf("\n The result After Divsion: %d\n", result);
            break;
            default:
            break;
    }
          //  default:
           //  printf("\n Invalid\n");
            //break;


return 0;
}