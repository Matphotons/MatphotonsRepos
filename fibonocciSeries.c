#include<stdio.h>



//int  i, a, b, result, n;
int main()

{   
    int i, a, b, n, result;
    a = 0;
    b = 1;
    printf("Enter the  series number n: ");
    scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
        
        printf("%d  ",a);
        result = a + b;
        a = b;
        b = result;
       // printf("%d", result)
  }   
    return 0;
}
