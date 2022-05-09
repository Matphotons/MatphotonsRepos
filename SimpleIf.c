#include <stdio.h>
int main()
{
    char x;
    printf("Please enter a chcaracter:");
    scanf("%d", &x);
    if(x>0 || x==0)
    {
        printf("this is a positive number");
    }
    else{
    printf("This is a negative number\n");
}
    
    return 0;
}