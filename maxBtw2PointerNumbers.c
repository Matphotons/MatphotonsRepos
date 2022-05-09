#include<stdio.h>
int main()
{
    int* ptr1, a;
    int* ptr2, b;
    a=0;
    b=0;
    ptr1 = &a;
    ptr2 = &b;
    printf("Enter numbers ptr1 and ptr2: ");
    scanf("%d, %d", ptr1, ptr2);
    if(*ptr1 > *ptr2)
    {
        printf("\nThe number a = %d is the maximum\n", a);
    }
    else if(*ptr2 > *ptr1)
        {
            printf("\n The number b = %d is the maximum \n", b);
        }
        else
        printf("a = %d is the same as b = %d\n", a, b);
return 0;
}