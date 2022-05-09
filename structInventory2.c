#include<stdio.h>
#include<stdlib.h>
struct inventory{
    int itemNo;
    char name[30];
    float rate;
    int quantity;
};

int main()
{
int i, totalPrice=0;
int priceSum=0;
int groundTotal=0;
int sum = 0;
struct inventory stocks[5];
printf("\nEnter the Item Number, Name, rate, Quantity:\n");
for(i=0; i<5; i++)
{printf("Enter the Item Number:\n");
scanf("%d", &stocks[i].itemNo);
printf("Enter the Item Name:\n");
scanf("%s", &stocks[i].name);
printf("Enter the Item Rate:\n");
scanf("%f", &stocks[i].rate);
printf("\nEnter the Item Quantity:\n");
scanf("%d", &stocks[i].quantity);

}
printf("\n{Item Number Name      Rate    Quantity}\n");
for(i=0; i<5; i++)
{
    printf("{%d, %s, %.2f, %d}\n",stocks[i].itemNo, stocks[i].name, stocks[i].rate, stocks[i].quantity );
    sum += stocks[i].rate;
    //printf("\n%d\n", sum);
}
printf("\n");
sum +=stocks[i].rate;
printf("\n%d\n", sum);
return 0;
}