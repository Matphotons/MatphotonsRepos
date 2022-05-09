#include <stdio.h>
#include <stdlib.h>
void Operations()
{   
    int card;
    printf("\n.......Welcome to MatPhons Bank ATM......\n");
    printf("Type 1 for card transaction or Enter 2 for cardless transaction");
    scanf("%d", &card);
    if(card==1)
    


}
void Login()
{   int num, login;
    printf("\nSelect your preffered Language:\n");
    printf("Enter 1 = for English\n");
    printf("Enter 2 = for Igbo\n");
    printf("Enter 3 = for Yoruba\n");
    printf("Enter 4 = for Housa\n");
    printf("Enter 5 = for Pigin\n");
    scanf("%d", &login);
    if(login==1)
    {
    printf("Please enter your pin:\n ");
    }
    else
    {
        printf("This machine speak english language for now");
    }

}

int main()
{   printf("Please slot in your Card or press any button for Cardless transaction!!");
    Login();
    return 0;
}