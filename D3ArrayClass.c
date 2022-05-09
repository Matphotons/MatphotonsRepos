#include<stdio.h>
int main()
{
    int array[2][3][3]; 
    int array2[3][3];
    int array3[3][3];
    int i, j, k; 
    //int size=0, row=0, col=0;
//printf("Enter the number of size: rows: and colunms: ");
//scanf("%d, %d, %d", &size,  &row, &col);
    
    for(i=0; i<2; i++)
    {   
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
            printf("\nEnter value: array[%d][%d][%d] : ", i,  j, k);
            scanf("%d", &array[i][j][k]);
            }
        }
    }
         printf("\n");
        printf("The elements of the 3D array are:- ");
        for(i=0; i<2; i++)
        {
            for(j=0; j<3; j++)   
            {
                for(k=0; k<3; k++)
                {
                printf("%d ", array[i][j][k]);
                if(k==3)
                {
                    printf("\n");
                }
            }   
        }

        printf("\n");
        
    }
            
return 0;
}