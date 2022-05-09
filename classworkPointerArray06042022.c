#include <stdio.h>
int main()
{
int n, i, array[100];
int* ptr=NULL;
int* num=NULL;
num  = &n;
ptr = &array[100];

printf("Enter the number of element n: ");
scanf("%d", num);

for(i=0; i<n; i++)
{
    printf("array[%d] = ", i);
    scanf("%d", array + i);
}
printf("\n");

for(i=0; i<n; i++)
{
    printf("array[%d] = %d \n", i, *(array + i));
}
printf("\n");
    return 0;
}