#include <stdio.h>
void SumOdd()
{
    int sum=0, num, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(num=1; num<=n; num +=2)
    {
        sum += num;
        printf("%d ", num);
    }
    printf("\n");
    printf("Sum = %d ", sum);
}
int main()
{
    SumOdd();
    printf("\n");

    SumOdd();
    printf("\n");
}