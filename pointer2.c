//C program to find the maximum cirular subarray sum of a given Array
#include<stdio.h>


int main()
{
    int a[]={1,2,3,4,5,6}; 
    int *x=NULL;
    x=a;
    int *p=NULL;
    int *p1=NULL;
    p1=&a[5];
    p=&a[2];
    printf("Result1 is: %d, %d, %d\n", p1, p, p-p1);/*address cannot be added */
    printf("Result2 is: %d, %d, %d, %d, %d, %d\n", *p1, *p, *p - *p1, *p + *p1);
     printf("post increament:\n");
     printf("%d\n", *x++); 
     printf("%d\n", *x++);
     printf("%d\n", *x++);
     printf("%d\n", *x++); 
     printf("%d\n", *x++);
     printf("%d\n", *x++);
     printf("post decreament:\n");
     printf("%d\n", *x--); 
     printf("%d\n", *x--);
     printf("%d\n", *x--);
     printf("%d\n", *x--); 
     printf("%d\n", *x--);
     printf("%d\n", *x--);
     printf("preIncrement:\n");
     printf("%d\n", ++*x); 
     printf("%d\n", ++*x);
     printf("%d\n", ++*x);
     printf("%d\n", ++*x); 
     printf("%d\n", ++*x);
     printf("%d\n", ++*x);
     printf("preDecrement\n");
     printf("%d\n", --*x); 
     printf("%d\n", --*x);
     printf("%d\n", --*x);
     printf("%d\n", --*x); 
     printf("%d\n", --*x);
     printf("%d\n", --*x);

  //  printf("Result3 is: %d\n", &a[1]);

    return 0;
}