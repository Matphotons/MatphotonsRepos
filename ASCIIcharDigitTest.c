#include <stdio.h>

int main()
{

     char x;
     printf("Enter Character:\n");
     scanf("%c", &x);

     if(x >=65 && x <=90)
     {
        printf("%c is an Uppercase Alphabet\n", x);
     }
     else if(x >= 97 && x <= 122)
     {
        printf("%c is a lowercase alphabet\n", x);
     }
     else if(x >= 48 && x <= 57)
     {
        printf("%c is a Number\n", x);
     }
     else if((x>=0 && x<= 47) || (x >= 58 && x <= 64) || (x>= 91 && x<=96)|| (x >=123 && x <= 127))
    {
               printf("%c is a special charater\n", x);
    }
   
       return 0;



}