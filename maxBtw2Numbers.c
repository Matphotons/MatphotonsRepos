#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter numbers a and b: ");
    scanf("%d, %d", &a, &b);
    if(a>b)
    {
        printf("\nThe number A :%d is the maximum", a);
    }
    else
    {
        printf("\n The number B:%d is the maximum \n", b);
    }
return 0;
}