#include<stdio.h>
#include<stdlib.h>
struct inventory{
    int itemNum;
    char name[30];
    float rate;
    int quantity;
};
int main()
{
    printf("Enter  item parameters: ");
  struct inventory item1={101, "Joy Soap", 20.0, 70};
  struct inventory item2={202, "Butter", 40.0, 100};
  struct inventory item3={303, "Wine", 205.0, 150};
  struct inventory item4={404, "Toothpaste", 70.0, 1000};
  struct inventory item5={505, "Perfumes", 400.90, 2000};

  struct inventory items[]={item1, item2, item3, item4, item5};
  for(int i=0; i<5; i++)
  {
      printf("\n{%d, %s, %.2f, %d}\n", items[i].itemNum, items[i].name, items[i].rate, items[i].quantity);
  }
int itemNum6;
char name6[30];
float rate6;
int quantity6;
struct inventory item6;
printf("Enter Item6: ");
scanf("%d, %s, %f, %d", &itemNum6, &name6, &rate6, &quantity6);
printf("item6={%d, %s, %f, %d}\n", itemNum6, name6, rate6, quantity6);
  return 0;  
}