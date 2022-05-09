#include <stdio.h>

int main(){

    int month, days;
    printf("Pls enter the month in digit: ");
    scanf("%d", &month);

    switch(month)
    {
        case 2:
            days = 28;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            days = 31;
            break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 30;
            break;
    default:
        days = 29;
        break;
    }
    if(days)
    printf(" Number of days in %dth month is %d \n", month, days);

    else 
    printf("\n You entered the wrong month ");
    return 0;

}