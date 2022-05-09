#include<stdio.h>
#include<windows.h>
#include<time.h>

int main()
{
    system("color 3F");
    int pin=2233, option, enteredPin, count=0, amount=1;
    float balance=5000;
    int continueTransanction=1;

    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t %s", ctime(&now));
    printf("\n\t\t........Welcome to ATM Machine.........\n\n");
    while(pin != enteredPin)
    {
        printf("\nPlease enter your pin: ");
        scanf("%d", &enteredPin);
        if(enteredPin != pin)
        {
            Beep(610,500);
            printf("\nInvalid pin!!!\n");
        }
        count++;
        if(count == 3 && pin != enteredPin){
            exit(0);
        }
    
    }
    while(continueTransanction != 0)
    {
    printf("\n.......Available Transaction!!!.........");
    printf("\n\n\t\t1. Withrawal....");
    printf("\n\n\t\t2. Deposit....");
    printf("\n\n\t\t3. Check Balance....");
    printf("\n\n\t\t4. Transfer....");
    printf("\n\n\t\t5. Buy Airtime....");
    printf("\n\n\t\t6. Pay Bills....");
    printf("\n\n\t\t7. Change pin....");
    printf("\n\n\t\tPlease Select option!!....");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
        while(amount%500 != 0)
        {
            printf("\n\t\t Enter the Amount NGN you want to Withdrawn");
            scanf("%d",&amount);
        
            if(amount%500 != 0)
            {
                printf("\n\t The amount should be multiple NGN500.");
            }
        }
         if(balance < amount)
            {
                printf("\n\t\t Sorry insufficient fund!!");
                amount = 1;
            }
        else
            {
             balance -= amount;
            printf("\n\t\tYou have withdrawn NGN%d. Your new balance is NGN%.2f: ", amount, balance);
            printf("\n");
            amount = 1;
            break;
            }
        case 2:
        {
            printf("\n\t\tPlease Enter the Amount NGN to be Deposited");
            scanf("%d", &amount);
            balance +=amount;
            printf("\n\t\tYou have deposite NGN%d. Your new balance is NGN%.2f", amount, balance);
            printf("\n");
            amount = 1;
            break;
        }
        case 3:
        {
            printf("\n\t\tYour Account Balance is NGN%.2f ", balance);
            break;
        }
        case 4:
        {
            while(amount < balance)
            {
            int phoneNo;
            printf("\nPlease Enter Bank Account Number:\n ");
            scanf("%d", &phoneNo);
            printf("\nEnter the amount to Transfter: ");
            scanf("%d", &amount);
            balance -=amount;
            printf("\n\t Your have transfered NGN%d . your new balance is NGN%.2f!!", amount, balance);
            }
            break;
        }
        case 5:
        {
            while(amount%50 !=0)
            {
                int phoneNumber;
                printf("Enter the amount of Airtime NGN");
                scanf("%d", &amount);
                printf("Enter Phone Number");
                scanf("%d", &phoneNumber);
                balance -= amount;
                printf("NGN%d amount of Airtime bought. Account Balance is NGN%.2f", amount, balance);
            }
            break;
        }
        case 6:
        case 7:
        default:
        Beep(610,500);
        printf("\n\t\t Invalid Option!!!!" );

    }
    printf("\n\tDo you wish to perform another Transanction? Press 1[Yes], 0[No]");
    scanf("%d", &continueTransanction);
}
    return 0;
}
