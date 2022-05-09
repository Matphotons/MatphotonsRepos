#include<stdio.h>

void SumEven()
{  int n, num, sum = 0;
     printf("Enter the number n: ");
    scanf("%d", &n);
    for(num=2; num<=n; num += 2)
    {
        sum += num;
        printf("%d  ", num);
    }
    printf("\n");
    printf("\nSum is: %d ", sum);
}

int main()
{
    SumEven();
    printf("\n");
    SumEven();
    printf("\n");
}