/*A C program to store Temperature of 2 cities for a week and display it*/
#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main()
{
    int Temp[CITY][WEEK];
    /* using nested loop to store value in a 2D array */
    for(int i=0; i<CITY; ++i)
    {
        for(int j=0; j<WEEK; ++j)
        {
            printf("CITY %d, Day %d: ", i+1, j+1);
            scanf("%d", &Temp[i][j]);
        }
    }
/* Using Nested loop to display values of a 2D array*/
printf("\nDisplaying the values\n\n");
    for(int i=0; i<CITY; ++i)
    {
        for(int j=0; j<WEEK; ++j)
        {
            printf("CITY %d, DAY %d= %d\n", i+1, j+1, Temp[i][j]);

        }

    }
    return 0;
}