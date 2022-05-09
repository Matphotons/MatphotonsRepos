#include <stdio.h>

int main()
{
    
    int  num[10];
    int i;
    int total, sum ;
    float average ;
    //scanf("%d", &x);
    //printf("Enter the size of your array: ");
   // scanf("%d", &x);
  printf("\nPlease enter your elements:\n");
   for(i =0; i<10; i++)
    {
    
    scanf("%d", &num[i]);
    }

    for(i=0; i<10; i++)
    {
        sum += num[i];
        total = sum;
      
    }
    printf("\nThe total sum is:%d\n", total);
    
    average =(float)total/10;
    printf("\nthe average of the numbers is:  %.2f\n", average);


return 0;
}