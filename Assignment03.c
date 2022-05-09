#include <stdio.h>
int main()
{
int i, n, array(i), sum = 0;
printf("Enter the number of elements n: ");
scanf("%d", &n);
printf("Enter the elements: (n-1) times: ");
scanf("%d", &array(i));
    for(i=0; i<n; i++)
    {
        sum += array(i);
    }
    printf("Sum is %d", sum);
return 0;
}