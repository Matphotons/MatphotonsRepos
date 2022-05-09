#include <stdio.h>
int main()
{
    int x;
    printf("Please enter Grade:\n");
    scanf("%i", &x);
    
    if(x>100)
    {
        printf("Pls enter a valid GRADE\n" );
    }
    
    else if(x>=70 || x==100)
    {
        printf("Grade is A\n");
    }
   
    else if(x>=60 || x==69)
    {
         printf("Grade is B \n");
}
    else if(x>=50 || x==59)
    {
        printf("Grade is C\n");
    }
    
    else if(x>=40 || x==49)
    {
        printf("Grade is D\n");

    }
           
     else{
        printf("Let my people go\n");
    }
    return 0;
}