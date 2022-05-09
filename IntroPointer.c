#include <stdio.h>
int main(){
int i = 5;
int *ptr = NULL;
ptr = &i; /*referencing pointer ptr to variable i using  '&' keyword**/
printf("*ptr = %d\n", *ptr); /* derefrencing the pointer **/
printf("*ptr = %d\n", ptr);
printf("*ptr = %p\n", *ptr);
printf("*ptr = %p\n", ptr);

    return 0;
}