//C program to find the maximum cirular subarray sum of a given Array
#include<stdio.h>

int kadane( int a[], int n);
int maxCircularSum(int a[], int n);

int max_kadane = kadane(a, n);
int max_wrap = 0, i;
for(i=0; i<n; i++)
{
    max_wrap += a[i];
    a[i] = -a[i];
}
max_wrap = max_wrap  + kadane(a, n);

return (max_wrap > max_kadane)? max_wrap : max_kadane;
}

int kadane(int a[], int n)
{
    int max_so_far = 0, max_ending_here = 0;
    int i;
    for(i=0; i<n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_ending_here<0)
        max_ending_here = 0;
        if(max_so_far < max_ending_here)
        max_so_far = max_ending_here;
    }
    return 0;
}

int main()
{
    int a[] = {11, 10, -20, 5, -3, -5, 8, -13, 10};
    int n = sizeof(a)/sizeof(a[0]);
    printf("maximum circular sum is %dn", maxCircularSum(a, n));
    return 0;
}