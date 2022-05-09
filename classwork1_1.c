#include<stdio.h>
int main()
{
    int num;
    printf("\tThe ODD NUMBERS from from 1 to .... are:\n");
    for(num = 1; num <= 100; num += 2)
    {
        printf("%d  ", num);
        //printf("\n\t\t world. \n");
    }
        printf("\nLast Number is: %d \n", num);
    return 0;
}