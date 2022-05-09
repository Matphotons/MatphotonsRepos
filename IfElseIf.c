#include <stdio.h>
int main()
{
    int x;
    printf("Please enter a chcaracter:");
    scanf("%d", &x);
    if(x>0 || x==0)
    {
        printf("this is a positive number");
    }
    else if(x<0)
    {
    printf("This is a negative number\n");
}
    
    return 0;
}