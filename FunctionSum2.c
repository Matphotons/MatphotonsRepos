#include<stdio.h>
#include<stdlib.h>

void Sum(int a, int b);
int main()
{
    Sum(5,7);
}
void Sum(int a, int b)
{
    //int a, b;
    int sum=0;
    //printf("Enter the two Number: \n");
    //scanf("%d %d", &a, &b);
    sum = a+b;
    printf("Sum = %d\n", sum);
}

/*void main()
{
    Sum();

}*/
