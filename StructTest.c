#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct month {
    
    char monthName[20]; 
    char mnth[4];
    int days;
    int i;
};

int main()
{   struct month month1={"January", "jan", 31, 1};
    struct month month2={"February", "feb", 28, 2};
    struct month month3={"March", "mar", 31, 3};
    struct month month4={"April", "apr", 30, 4};
    struct month month5={"May", "may", 31, 5};
    struct month month6={"June", "jun", 30, 6};
    struct month month7={"July", "jul", 31, 7};
    struct month month8={"August", "aug", 31, 8};
    struct month month9={"September", "sep", 30, 9};
    struct month month10={"October", "oct", 31, 10};
    struct month month11={"November", "nov", 30, 11};
    struct month month12={"December", "dec", 31, 12};
    struct month months[12]={month1, month2, month3, month4, month5, month6, month7, month8, month9, month10, month11, month12};
    for(int i=0; i<12; i++ )
    {
        printf("{%s, %s, %d, %d}  \n", months[i], months[i].mnth, months[i].days, i+1);
    }

    return 0;
}