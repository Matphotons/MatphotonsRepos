#include<stdio.h>
#include<conio.h>

int main()
{
    int num[20][20], i, j, sum=0, sum1=0, n;
    printf("Enter number of Rows and Column in Matrix: ");
    scanf("%d", &n);
    printf("Enter element of Matrix...\n");
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter element in pocket: [%d][%d]:-\t", i, j);
            scanf("%d", &num[i][j]);
        }
    }
    printf("Matrix is .......\n");
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d   ", num[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                sum = sum + num[i][j];
            }
            if(i+j==n-1)
            {
                sum1 = sum1 + num[i][j];
            }
        }
    }
    printf("Diagonal sums of the Matrix are: %d and\t %d\n ", sum, sum1);
    getchar();
}