#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
struct structIntCal
{
    char name[20];
    int num;
    float amt;
}xyz;

void intCal(struct structIntCal);
printf("\nEnter the Customer's Name: ");
gets(xyz.name);
printf("\nEnter Customer's number: ");
scanf("%d", &xyz.num);
printf("Enter Prinipal Amount: ");
scanf("%f", &xyz.amt);
intCal(xyz);
}
void intCal(struct {char name[20]; int num;float amt;}abc)
{
    float si, rate =5.5, yrs=2.5;
    si=(abc.amt*rate*yrs)/100;
    printf("\nThe Customer's name  is %s",abc.name);
    printf("\nThe Customer's number is %d", abc.num);
    printf("\nThe Amount is %f", si);
    return;
}