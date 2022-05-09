#include <stdio.h>
int main()
{
int n=10;
void *ptr = &n;
printf("Result is : %d\n", *(int *)ptr);
printf("Result is : %p\n", *(int *)ptr);

    return 0;
}