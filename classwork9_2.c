#include<stdio.h>
#include<string.h>


int  i, a, b, result, n;
int main()

{   a = 0;
    b = 1;
    printf("Enter the  series number n: ");
    scanf("%d ", &n);
        for(i=1; i<=n; i++)
        {
        
        printf("%d ",a);
        a = b;
        b = result;
        printf("%d", result);
      }   
    return 0;
}
