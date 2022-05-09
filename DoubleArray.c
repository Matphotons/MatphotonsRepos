#include <stdio.h>

int main()
{
int i, j,n, array[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//printf("Enter the Elements: ");
//printf("Enter the row element: ");
//for(i=0; i<4; i++)

    //printf("Enter ther colum Element: ");
    for (i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        { 
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
      //scanf("%d ", &array[i][j]);
        printf("first row 2nd element:     %d\n  ", array[0][1]);
        printf("second row 3rd element:    %d \n ", array[1][2]);
        printf("third row  forth element:   %d \n ", array[2][3]);
        printf("fourth row first element:   %d \n ", array[3][0]);


    printf("\n");

return 0;
}

