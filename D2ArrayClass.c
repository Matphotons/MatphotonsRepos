#include<stdio.h>
int main()
{
    int array[100][100], array2[100][100];
    int i, j, row=0, col=0;
printf("Enter the number of rows and colunms: ");
scanf("%d, %d", &row, &col);
    
    for(i=0; i<row; i++)
    {   
        for(j=0; j<col; j++)
        {
         printf("\nEnter value: array[%d][%d] : ", i,  j);
        scanf("%d", &array[i][j]);
        }
    }
         printf("\n");
        printf("The elements of the array are:- ");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)   
            {
                printf("%d ", array[i][j]);
                //array[i][j]=array2[i][j];
                //printf("%d", array2[i][j]);
            }  
           //array[i][j]=array2[i][j];
                //printf("%d ", array2[i][j]);       
        }

        printf("\n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
            array[i][j] = array2[i][j];
            printf("%d ", array2[i][j]);
            }
        }
//array[i][j] = array2[i][j];
//printf("%d \n", array2[i][j]);
            
return 0;
}