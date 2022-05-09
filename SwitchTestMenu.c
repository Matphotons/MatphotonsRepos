#include <stdio.h>

int main()
{
    int Bur, Fr, Pi, Sa, T;

        Bur=200;
        Fr=50;
        Pi=500;
        Sa=150;
    char  B, F, P, S, menu;
    
    
    printf("\n Enter your MENU :   ");
        
    scanf(" %d %d %d %d", &B, &F, &P, &S);

    scanf("%c", &menu);
   // op = '/';

switch(menu)
{
    case 'B':
            T= Bur;
            printf("\n Your Menu is Burger %c\n",  menu);
            printf("\nTotal Charge is : %d\n", T);
            break;
    
  // case '+':
      //      result = x + y;
       //     printf("\n The result after Addition: %d", result);
         //   break;

    case 'P':
            T = Pi;
            printf("\n Your Menu is Pizza: %c\n", menu);
            printf("Total Charge is: %d\n", T);
            break;
    
    case 'F':
            T= Fr;
            printf("\n Your Menu is French_Fries: %c\n", menu);
            printf("Total Charge is: %d\n", T);
            break;
    case 'S':
            T=Sa;
            printf("\n Your Menu is Sandwich: %c\n", menu);
            printf("\nTotal Charge is : %d\n", T);
            break;
    default:
             printf("\n Invalid\n");
            break;
}

return 0;
}